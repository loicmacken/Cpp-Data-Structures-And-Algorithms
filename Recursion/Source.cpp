#include <iostream>
#include "NaturalNumbers.h"

int main()
{
	int n = 215;
	std::cout << "Sum of natural numbers up to and including " << n << ", using three different methods:\n\n";
	std::cout << "Recursion:\t\t" << NaturalNumbers::sumRecursion(n) << "\t\twith a time complexity of O(n)\n";
	std::cout << "Loop:\t\t\t" << NaturalNumbers::sumLoop(n) << "\t\twith a time complexity of O(n)\n";
	std::cout << "Formula (n*(n+1)/2):\t" << NaturalNumbers::sumFormula(n) << "\t\twith a time complexity of O(1)\n";
	std::cout << std::endl;
}