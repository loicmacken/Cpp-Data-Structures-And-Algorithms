#include "Fibonacci.h"

int Fibonacci::Recursive(int n)
{
    if (n <= 1) return n;
    return Recursive(n - 2) + Recursive(n - 1);
}

int Fibonacci::Loop(int n)
{
    if (n <= 1) return n;
    int t0 = 0, t1 = 1, s;
    for (int i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}
