#include <arm_sme.h>
#include <math.h>

__arm_new("za") void func(long i, double *fa, double *f, long nx, double p[], int term) __arm_streaming {
    svzero_za();
    svfloat64_t p_0 = svld1_f64(svptrue_b64(), p);
    svfloat64_t p_1 = svld1_f64(svptrue_b64(), p + 8);
    svfloat64_t x = svld1_f64(svptrue_b64(), &f[i * 8]);
    svfloat64_t x_2 = svmul_f64_x(svptrue_b64(), x, x);
    svfloat64_t x_k = x_2;
    svfloat64_t one = svdup_n_f64(1.0);
    svmopa_za64_f64_m(0, svptrue_b64(), svptrue_b64(), one, p_0);
    svmopa_za64_f64_m(0, svptrue_b64(), svptrue_b64(), x, p_1);
    svfloat64_t out_0;
    svfloat64_t out_1;
    svfloat64_t out_2;
    svfloat64_t out_3;
    svfloat64_t out_4;
    svfloat64_t out_5;
    svfloat64_t out_6;
    svfloat64_t out_7;
    out_0 = svread_ver_za64_f64_m(out_0, svptrue_b64(), 0, 0);
    out_1 = svread_ver_za64_f64_m(out_1, svptrue_b64(), 0, 1);
    out_2 = svread_ver_za64_f64_m(out_2, svptrue_b64(), 0, 2);
    out_3 = svread_ver_za64_f64_m(out_3, svptrue_b64(), 0, 3);
    out_4 = svread_ver_za64_f64_m(out_4, svptrue_b64(), 0, 4);
    out_5 = svread_ver_za64_f64_m(out_5, svptrue_b64(), 0, 5);
    out_6 = svread_ver_za64_f64_m(out_6, svptrue_b64(), 0, 6);
    out_7 = svread_ver_za64_f64_m(out_7, svptrue_b64(), 0, 7);
    svfloat64_t acc = svadd_f64_m(svptrue_b64(), out_0, svmul_f64_m(svptrue_b64(), out_1, x_k));
    x_k = svmul_f64_m(svptrue_b64(), x_k, x_2);
    acc = svadd_f64_m(svptrue_b64(), acc, svmul_f64_m(svptrue_b64(), out_2, x_k));
    x_k = svmul_f64_m(svptrue_b64(), x_k, x_2);
    acc = svadd_f64_m(svptrue_b64(), acc, svmul_f64_m(svptrue_b64(), out_3, x_k));
    x_k = svmul_f64_m(svptrue_b64(), x_k, x_2);
    acc = svadd_f64_m(svptrue_b64(), acc, svmul_f64_m(svptrue_b64(), out_4, x_k));
    x_k = svmul_f64_m(svptrue_b64(), x_k, x_2);
    acc = svadd_f64_m(svptrue_b64(), acc, svmul_f64_m(svptrue_b64(), out_5, x_k));
    x_k = svmul_f64_m(svptrue_b64(), x_k, x_2);
    acc = svadd_f64_m(svptrue_b64(), acc, svmul_f64_m(svptrue_b64(), out_6, x_k));
    x_k = svmul_f64_m(svptrue_b64(), x_k, x_2);
    acc = svadd_f64_m(svptrue_b64(), acc, svmul_f64_m(svptrue_b64(), out_7, x_k));
    svst1_f64(svptrue_b64(), &fa[i * 8], acc);
}

void polynomial(double *fa, double *f, long nx, double p[], int term) {
    long L = nx / 8;
    double p_temp[16] = {0};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 8; j++) {
            if (j * 2 + i < term) {
                p_temp[i * 8 + j] = p[j * 2 + i];
            }
        }
    }
#pragma omp parallel for
    for (long i = 0; i < L; i++) {
        func(i, fa, f, nx, p_temp, term);
    }
}