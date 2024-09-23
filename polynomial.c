#include <arm_sme.h>
#include <math.h>

__arm_new("za") void func(long i, double *fa, double *f, long nx, double p[], int term) __arm_streaming {
    long offset = i * 64;
    svzero_za();
    svfloat64_t p_0;
    svfloat64_t p_1;
    svfloat64_t one;
    svfloat64_t x;
    svfloat64_t x_2;
    svfloat64_t x_k;
    svfloat64_t out_0;
    svfloat64_t out_1;
    svfloat64_t out_2;
    svfloat64_t out_3;
    svfloat64_t out_4;
    svfloat64_t out_5;
    svfloat64_t out_6;
    svfloat64_t out_7;
    svfloat64_t acc;
    p_0 = svld1_f64(svptrue_b64(), p);
    p_1 = svld1_f64(svptrue_b64(), p + 8);
    one = svdup_n_f64(1.0);

    x = svld1_f64(svptrue_b64(), &f[offset]);
    x_2 = svmul_f64_x(svptrue_b64(), x, x);
    x_k = x_2;
    svmopa_za64_f64_m(0, svptrue_b64(), svptrue_b64(), one, p_0);
    svmopa_za64_f64_m(0, svptrue_b64(), svptrue_b64(), x, p_1);
    out_0 = svread_ver_za64_f64_m(out_0, svptrue_b64(), 0, 0);
    out_1 = svread_ver_za64_f64_m(out_1, svptrue_b64(), 0, 1);
    out_2 = svread_ver_za64_f64_m(out_2, svptrue_b64(), 0, 2);
    out_3 = svread_ver_za64_f64_m(out_3, svptrue_b64(), 0, 3);
    out_4 = svread_ver_za64_f64_m(out_4, svptrue_b64(), 0, 4);
    out_5 = svread_ver_za64_f64_m(out_5, svptrue_b64(), 0, 5);
    out_6 = svread_ver_za64_f64_m(out_6, svptrue_b64(), 0, 6);
    out_7 = svread_ver_za64_f64_m(out_7, svptrue_b64(), 0, 7);
    acc = svadd_f64_m(svptrue_b64(), out_0, svmul_f64_m(svptrue_b64(), out_1, x_k));
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
    svst1_f64(svptrue_b64(), &fa[offset], acc);

    offset += 8;
    x = svld1_f64(svptrue_b64(), &f[offset]);
    x_2 = svmul_f64_x(svptrue_b64(), x, x);
    x_k = x_2;
    svmopa_za64_f64_m(1, svptrue_b64(), svptrue_b64(), one, p_0);
    svmopa_za64_f64_m(1, svptrue_b64(), svptrue_b64(), x, p_1);
    out_0 = svread_ver_za64_f64_m(out_0, svptrue_b64(), 1, 0);
    out_1 = svread_ver_za64_f64_m(out_1, svptrue_b64(), 1, 1);
    out_2 = svread_ver_za64_f64_m(out_2, svptrue_b64(), 1, 2);
    out_3 = svread_ver_za64_f64_m(out_3, svptrue_b64(), 1, 3);
    out_4 = svread_ver_za64_f64_m(out_4, svptrue_b64(), 1, 4);
    out_5 = svread_ver_za64_f64_m(out_5, svptrue_b64(), 1, 5);
    out_6 = svread_ver_za64_f64_m(out_6, svptrue_b64(), 1, 6);
    out_7 = svread_ver_za64_f64_m(out_7, svptrue_b64(), 1, 7);
    acc = svadd_f64_m(svptrue_b64(), out_0, svmul_f64_m(svptrue_b64(), out_1, x_k));
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
    svst1_f64(svptrue_b64(), &fa[offset], acc);

    offset += 8;
    x = svld1_f64(svptrue_b64(), &f[offset]);
    x_2 = svmul_f64_x(svptrue_b64(), x, x);
    x_k = x_2;
    svmopa_za64_f64_m(2, svptrue_b64(), svptrue_b64(), one, p_0);
    svmopa_za64_f64_m(2, svptrue_b64(), svptrue_b64(), x, p_1);
    out_0 = svread_ver_za64_f64_m(out_0, svptrue_b64(), 2, 0);
    out_1 = svread_ver_za64_f64_m(out_1, svptrue_b64(), 2, 1);
    out_2 = svread_ver_za64_f64_m(out_2, svptrue_b64(), 2, 2);
    out_3 = svread_ver_za64_f64_m(out_3, svptrue_b64(), 2, 3);
    out_4 = svread_ver_za64_f64_m(out_4, svptrue_b64(), 2, 4);
    out_5 = svread_ver_za64_f64_m(out_5, svptrue_b64(), 2, 5);
    out_6 = svread_ver_za64_f64_m(out_6, svptrue_b64(), 2, 6);
    out_7 = svread_ver_za64_f64_m(out_7, svptrue_b64(), 2, 7);
    acc = svadd_f64_m(svptrue_b64(), out_0, svmul_f64_m(svptrue_b64(), out_1, x_k));
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
    svst1_f64(svptrue_b64(), &fa[offset], acc);

    offset += 8;
    x = svld1_f64(svptrue_b64(), &f[offset]);
    x_2 = svmul_f64_x(svptrue_b64(), x, x);
    x_k = x_2;
    svmopa_za64_f64_m(3, svptrue_b64(), svptrue_b64(), one, p_0);
    svmopa_za64_f64_m(3, svptrue_b64(), svptrue_b64(), x, p_1);
    out_0 = svread_ver_za64_f64_m(out_0, svptrue_b64(), 3, 0);
    out_1 = svread_ver_za64_f64_m(out_1, svptrue_b64(), 3, 1);
    out_2 = svread_ver_za64_f64_m(out_2, svptrue_b64(), 3, 2);
    out_3 = svread_ver_za64_f64_m(out_3, svptrue_b64(), 3, 3);
    out_4 = svread_ver_za64_f64_m(out_4, svptrue_b64(), 3, 4);
    out_5 = svread_ver_za64_f64_m(out_5, svptrue_b64(), 3, 5);
    out_6 = svread_ver_za64_f64_m(out_6, svptrue_b64(), 3, 6);
    out_7 = svread_ver_za64_f64_m(out_7, svptrue_b64(), 3, 7);
    acc = svadd_f64_m(svptrue_b64(), out_0, svmul_f64_m(svptrue_b64(), out_1, x_k));
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
    svst1_f64(svptrue_b64(), &fa[offset], acc);

    offset += 8;
    x = svld1_f64(svptrue_b64(), &f[offset]);
    x_2 = svmul_f64_x(svptrue_b64(), x, x);
    x_k = x_2;
    svmopa_za64_f64_m(4, svptrue_b64(), svptrue_b64(), one, p_0);
    svmopa_za64_f64_m(4, svptrue_b64(), svptrue_b64(), x, p_1);
    out_0 = svread_ver_za64_f64_m(out_0, svptrue_b64(), 4, 0);
    out_1 = svread_ver_za64_f64_m(out_1, svptrue_b64(), 4, 1);
    out_2 = svread_ver_za64_f64_m(out_2, svptrue_b64(), 4, 2);
    out_3 = svread_ver_za64_f64_m(out_3, svptrue_b64(), 4, 3);
    out_4 = svread_ver_za64_f64_m(out_4, svptrue_b64(), 4, 4);
    out_5 = svread_ver_za64_f64_m(out_5, svptrue_b64(), 4, 5);
    out_6 = svread_ver_za64_f64_m(out_6, svptrue_b64(), 4, 6);
    out_7 = svread_ver_za64_f64_m(out_7, svptrue_b64(), 4, 7);
    acc = svadd_f64_m(svptrue_b64(), out_0, svmul_f64_m(svptrue_b64(), out_1, x_k));
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
    svst1_f64(svptrue_b64(), &fa[offset], acc);

    offset += 8;
    x = svld1_f64(svptrue_b64(), &f[offset]);
    x_2 = svmul_f64_x(svptrue_b64(), x, x);
    x_k = x_2;
    svmopa_za64_f64_m(5, svptrue_b64(), svptrue_b64(), one, p_0);
    svmopa_za64_f64_m(5, svptrue_b64(), svptrue_b64(), x, p_1);
    out_0 = svread_ver_za64_f64_m(out_0, svptrue_b64(), 5, 0);
    out_1 = svread_ver_za64_f64_m(out_1, svptrue_b64(), 5, 1);
    out_2 = svread_ver_za64_f64_m(out_2, svptrue_b64(), 5, 2);
    out_3 = svread_ver_za64_f64_m(out_3, svptrue_b64(), 5, 3);
    out_4 = svread_ver_za64_f64_m(out_4, svptrue_b64(), 5, 4);
    out_5 = svread_ver_za64_f64_m(out_5, svptrue_b64(), 5, 5);
    out_6 = svread_ver_za64_f64_m(out_6, svptrue_b64(), 5, 6);
    out_7 = svread_ver_za64_f64_m(out_7, svptrue_b64(), 5, 7);
    acc = svadd_f64_m(svptrue_b64(), out_0, svmul_f64_m(svptrue_b64(), out_1, x_k));
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
    svst1_f64(svptrue_b64(), &fa[offset], acc);

    offset += 8;
    x = svld1_f64(svptrue_b64(), &f[offset]);
    x_2 = svmul_f64_x(svptrue_b64(), x, x);
    x_k = x_2;
    svmopa_za64_f64_m(6, svptrue_b64(), svptrue_b64(), one, p_0);
    svmopa_za64_f64_m(6, svptrue_b64(), svptrue_b64(), x, p_1);
    out_0 = svread_ver_za64_f64_m(out_0, svptrue_b64(), 6, 0);
    out_1 = svread_ver_za64_f64_m(out_1, svptrue_b64(), 6, 1);
    out_2 = svread_ver_za64_f64_m(out_2, svptrue_b64(), 6, 2);
    out_3 = svread_ver_za64_f64_m(out_3, svptrue_b64(), 6, 3);
    out_4 = svread_ver_za64_f64_m(out_4, svptrue_b64(), 6, 4);
    out_5 = svread_ver_za64_f64_m(out_5, svptrue_b64(), 6, 5);
    out_6 = svread_ver_za64_f64_m(out_6, svptrue_b64(), 6, 6);
    out_7 = svread_ver_za64_f64_m(out_7, svptrue_b64(), 6, 7);
    acc = svadd_f64_m(svptrue_b64(), out_0, svmul_f64_m(svptrue_b64(), out_1, x_k));
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
    svst1_f64(svptrue_b64(), &fa[offset], acc);

    offset += 8;
    x = svld1_f64(svptrue_b64(), &f[offset]);
    x_2 = svmul_f64_x(svptrue_b64(), x, x);
    x_k = x_2;
    svmopa_za64_f64_m(7, svptrue_b64(), svptrue_b64(), one, p_0);
    svmopa_za64_f64_m(7, svptrue_b64(), svptrue_b64(), x, p_1);
    out_0 = svread_ver_za64_f64_m(out_0, svptrue_b64(), 7, 0);
    out_1 = svread_ver_za64_f64_m(out_1, svptrue_b64(), 7, 1);
    out_2 = svread_ver_za64_f64_m(out_2, svptrue_b64(), 7, 2);
    out_3 = svread_ver_za64_f64_m(out_3, svptrue_b64(), 7, 3);
    out_4 = svread_ver_za64_f64_m(out_4, svptrue_b64(), 7, 4);
    out_5 = svread_ver_za64_f64_m(out_5, svptrue_b64(), 7, 5);
    out_6 = svread_ver_za64_f64_m(out_6, svptrue_b64(), 7, 6);
    out_7 = svread_ver_za64_f64_m(out_7, svptrue_b64(), 7, 7);
    acc = svadd_f64_m(svptrue_b64(), out_0, svmul_f64_m(svptrue_b64(), out_1, x_k));
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
    svst1_f64(svptrue_b64(), &fa[offset], acc);
}

void polynomial(double *fa, double *f, long nx, double p[], int term) {
    long L = nx / 64;
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
    if (nx % 64 != 0) {
        long len = svcntd();
#pragma omp parallel for
        for (long i = nx / 64 * 64; i < nx; i += len) {
            svbool_t pg = svwhilelt_b64_u64(i, nx);
            svfloat64_t result = svdup_f64(p[term - 1]);
            svfloat64_t x = svld1_f64(pg, &f[i]);
            for (int j = term - 2; j >= 0; j--) {
                result = svmul_f64_x(pg, result, x);
                result = svadd_f64_x(pg, result, svdup_f64(p[j]));
            }
            svst1_f64(pg, &fa[i], result);
        }
    }
}