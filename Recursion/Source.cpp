#include <iostream>
#include "NaturalNumbers.h"
#include "Factorial.h"
#include "Power.h"
#include "TaylorExponent.h"
#include "Fibonacci.h"
#include "Combination.h"

void printNaturalNumbers()
{
	int n = 215;
	std::cout << "Sum of natural numbers up to and including " << n << ", using three different methods:\n\n";
	std::cout << "Recursion:\t\t\t" << NaturalNumbers::sumRecursion(n) << "\t\twith a time complexity of O(n)\n";
	std::cout << "Loop:\t\t\t\t" << NaturalNumbers::sumLoop(n) << "\t\twith a time complexity of O(n)\n";
	std::cout << "Formula (n*(n+1)/2):\t\t" << NaturalNumbers::sumFormula(n) << "\t\twith a time complexity of O(1)\n";
	std::cout << std::endl;
}

void printFactorial()
{
	int n = 10;
	std::cout << "Factorial of " << n << ", using two different methods:\n\n";
	std::cout << "Recursion:\t\t\t" << Factorial::factorialRecursive(n) << "\t\twith a time complexity of O(n)\n";
	std::cout << "Loop:\t\t\t\t" << Factorial::factorialLoop(n) << "\t\twith a time complexity of O(n)\n";
	std::cout << std::endl;
}

void printPower()
{
	int m = 2, n = 10;
	std::cout  << m << " to the power of " << n <<", using three different methods:\n\n";
	std::cout << "Recursion:\t\t\t" << Power::powerRecursion(m,n) << "\t\twith a time complexity of O(n)\n";
	std::cout << "Faster Recursion:\t\t" << Power::powerRecursionFast(m, n) << "\t\twith a time complexity of O(n)\n";
	std::cout << "Loop:\t\t\t\t" << Power::powerLoop(m, n) << "\t\twith a time complexity of O(n)\n";
	std::cout << std::endl;
}

void printTaylorExponent()
{
	int x = 2, n = 10;
	std::cout << "Euler's number e to the power " << x << ", approximated using Taylor series with " << n << " iterations, using three different methods:\n\n";
	std::cout << "Recursion:\t\t\t" << TaylorExponent::exponentRecursive(x, n) << "\t\twith a time complexity of O(n^2)\n";
	std::cout << "Recursion Horner's rule:\t" << TaylorExponent::exponentRecursive(x, n) << "\t\twith a time complexity of O(n)\n";
	std::cout << "Loop Horner's rule:\t\t" << TaylorExponent::exponentRecursive(x, n) << "\t\twith a time complexity of O(n)\n";
	std::cout << std::endl;
}

void printFibonacci()
{
	int n = 10;
	std::cout << "Fibonacci sequence for " << n << " iterations, using two different methods:\n\n";
	std::cout << "Recursion:\t\t\t" << Fibonacci::Recursive(n) << "\t\twith a time complexity of O(2^n)\n";
	std::cout << "Loop:\t\t\t\t" << Fibonacci::Loop(n) << "\t\twith a time complexity of O(n)\n";
	std::cout << std::endl;
}

void printCombination()
{
	int n = 5, r = 3;
	std::cout << "Combination formula for " << n << " choose " << r << ":\n\n";
	std::cout << "Recursion (Pascal triangle):\t" << Combination::recursive(n,r) << "\t\twith a time complexity of O(2^n/sqrt(n))\n";
	std::cout << std::endl;
}

int main()
{
	printNaturalNumbers();
	printFactorial();
	printPower();
	printTaylorExponent();
	printFibonacci();
	printCombination();
}
