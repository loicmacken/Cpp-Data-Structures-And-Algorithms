#include "TaylorExponent.h"

double TaylorExponent::exponentRecursive(int x, int n)
{
    if (n == 0) return 1.0;
    static double p = 1.0, f = 1.0;
    double r;

    r = exponentRecursive(x, n - 1);
    p *= x;
    f *= n;
    return r + p / f;
}

double TaylorExponent::exponentHornerRecursive(int x, int n)
{
    if (n == 0) return 1.0;
    static double s = 1.0;
    s = 1.0 + (double)x / double(n) * s;
    return exponentHornerRecursive(x, n - 1);
}

double TaylorExponent::exponentHornerLoop(int x, int n)
{
    double s = 1.0;
    while (n > 0)
    {
        s = 1.0 + (double)x / double(n) * s;
        n--;
    }
    return s;
}
