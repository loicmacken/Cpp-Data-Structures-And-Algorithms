#pragma once

class TaylorExponent
{
public:
	static double exponentRecursive(int x, int n);
	static double exponentHornerRecursive(int x, int n);
	static double exponentHornerLoop(int x, int n);
};