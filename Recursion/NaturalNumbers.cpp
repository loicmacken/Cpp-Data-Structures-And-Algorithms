#include "NaturalNumbers.h"

int NaturalNumbers::sumRecursion(int n)
{
	/*
		Calculate the sum of all natural numbers up to and including n
		using recursion.
		Time complexity: O(n)
	*/

	if (n <= 0) return 0;
	return sumRecursion(n - 1) + n;
}

int NaturalNumbers::sumLoop(int n)
{
	/*
		Calculate the sum of all natural numbers up to and including n
		using loops.
		Time complexity: O(n)
	*/

	int s = 0;
	for (int i = n; i > 0; i--)
	{
		s += i;
	}
	return s;
}

int NaturalNumbers::sumFormula(int n)
{
	/*
		Calculate the sum of all natural numbers up to and including n
		using the formula of triangular numbers.
		Time complexity: O(1)
	*/

	return n * (n + 1) / 2;
}