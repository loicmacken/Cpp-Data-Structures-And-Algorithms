#include <iostream>

using namespace std;

struct Rectangle
{
	int width;
	int height;
	char x;
};

int main()
{
	int* p = new int[5];
	p[0] = 10; p[1] = 15; p[2] = 14; p[3] = 21; p[4] = 31;

	for (int i = 0; i < 5; i++)
	{
		cout << p[i] << endl;
	}
	cout << sizeof(p) << endl;

	delete[] p;
	
	/*
	Rectangle r1 = { 10, 5 };
	
	int a = 10;
	int* p;
	p = &a;

	int A[] = { 2,4,6,8,10 };
	int* pA;
	pA = A; // or p = &A[0];

	for (int i = 0; i < 5; i++)
	{
		cout << pA[i] << endl;
	}
	*/

	// cout << "Int: " << a << "\nFrom pointer: " << *p << "\nAt address: " << p << endl;

	// cout << "Size: " << sizeof(r1) << " bytes\n" << r1.height << "\n" << r1.width << endl;
}