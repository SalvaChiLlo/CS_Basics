#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	/*
	Declaration of an Array of 5 elements
	---------------------
	|		|		|		|		|		|
	---------------------
		0		1		2		3		4
	*/
	int A[5];

	/*
	Setting the value in pos X of the array;
	-----------------------
	| 27 |		|		|		|		|
	-----------------------
		0		1		2		3		4
	*/
	A[0] = 27;

	/*
	Setting the value in pos X of the array;
	-----------------------
	| 27 | 10 |		|		|		|
	-----------------------
		0		1		2		3		4
	*/
	A[1] = 10;

	/*
	Declaration and initialization of an Array of 5 elements
	---------------------
	| 1 | 2 | 3 | 4 | 5 |
	---------------------
		0		1		2		3		4
	*/
	int B[5] = {1, 2, 3};
	/*
	When declaring an array you can skip specifying its size if you initialize it at the same
	time, it will the same size as elemenets are in the initialization 
	*/
	int C[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	/*
	How to know the length of an array
	*/
	cout << "The size of the array 'A' is " << sizeof(A) / sizeof(A[0]) << endl;
	cout << "The size of the array 'B' is " << sizeof(B) / sizeof(B[0]) << endl;
	int cLength;
	cLength = sizeof(C) / sizeof(C[0]);
	cout << "The size of the array 'C' is " << cLength << endl;
	/*
	Accessing data in an array
	*/
	int i;
	cout << "Iterating through array A" << endl;
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", A[i]);
	}

	cout << "Iterating through array B" << endl;
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", B[i]);
	}

	cout << "Iterating through array C" << endl;
	for (i = 0; i < cLength; i++)
	{
		printf("%d\n", C[i]);
	}

	cout << "Iterating through array C, with a 'int val : C' for loop" << endl;
	for (int val : C)
	{
		printf("%d\n", val);
	}

	return (0);
}