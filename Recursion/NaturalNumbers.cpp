#include "NaturalNumbers.h"

int NaturalNumbers::sumRecursion(int n)
{
	if (n <= 0) return 0;
	return sumRecursion(n - 1) + n;
}

int NaturalNumbers::sumLoop(int n)
{
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		s += i;
	}
	return s;
}

int NaturalNumbers::sumFormula(int n)
{
	return n * (n + 1) / 2;
}