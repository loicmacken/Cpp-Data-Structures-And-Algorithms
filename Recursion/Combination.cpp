#include "Combination.h"

int Combination::recursive(int n, int r)
{
    if (r == 0 || n == r) return 1;
    return recursive(n - 1, r - 1) + recursive(n - 1, r);
}
