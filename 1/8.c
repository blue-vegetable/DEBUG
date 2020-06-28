#include <stdio.h>
#include <math.h>
#define EPSILON 1e-7

double bisection(int p, int q, double (*func)(int, int, double));
double f(int p, int q, double x);

int main()
{
    int p;
    int q;

    scanf("%d%d", &p, &q);
    printf("%.4f\n", bisection(p, q, f));

    return 0;
}

double bisection(int p, int q, double (*func)(int, int, double))
{
    double a = -20.0;
    double b = 20.0;
    double x = 0.0;

    do {
        if (f(p, q, a)*f(p, q, x) < 0 ) {
            b = x;
        } else {
            a = x;
        }
        x = (a + b) / 2;
    } while (fabs(f(p, q, x)) > EPSILON);

    return x;
}

double f(int p, int q, double x)
{
    return p * x + q;
}
