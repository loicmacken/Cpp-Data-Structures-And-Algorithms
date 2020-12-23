#include "Factorial.h"

int Factorial::factorialRecursive(int n)
{
    if (n < 2) return 1;
    return n * factorialRecursive(n - 1);
}

int Factorial::factorialLoop(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
