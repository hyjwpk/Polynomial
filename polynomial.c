#include <math.h>

void polynomial(double *fa, double *f, long nx, double p[], int term)
{
    double x;

    long i;
    int j;
    for (i = 0; i < nx; i++) {
        x = f[i];
        fa[i] = p[term - 1];
        for (j = term - 2; j >= 0; j--) {
            fa[i] *= x;
            fa[i] += p[j];
        }
    }
}