#include <arm_sve.h>
#include <math.h>

void polynomial(double *restrict fa, double *restrict f, long nx, double *restrict p, int term) {
    long len = svcntd();
#pragma omp parallel for
    for (long i = 0; i < nx; i += len) {
        svbool_t pg = svwhilelt_b64_u64(i, nx);
        svfloat64_t result = svdup_f64(p[term - 1]);
        svfloat64_t x = svld1_f64(pg, &f[i]);
        for (int j = term - 2; j >= 0; j--) {
            result = svmad_f64_m(pg, x, result, svdup_f64(p[j]));
        }
        svst1_f64(pg, &fa[i], result);
    }
}