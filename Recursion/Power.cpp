#include "Power.h"

int Power::powerRecursion(int m, int n)
{
    if (n == 0) return 1;
    if (n < 2) return m;
    return m * powerRecursion(m, n - 1);
}

int Power::powerRecursionFast(int m, int n)
{
    if (n == 0) return 1;
    if (n < 2) return m;
    if (n % 2 == 0) return powerRecursionFast(m * m, n / 2);
    return m * powerRecursionFast(m, n - 1);
}

int Power::powerLoop(int m, int n)
{
    if (n == 0) return 1;
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= m;
    }
    return result;
}
