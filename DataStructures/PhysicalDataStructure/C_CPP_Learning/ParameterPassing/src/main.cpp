#include <iostream>

using namespace std;

// pass by value
// void swap(int x, int y)
// pass pointer
// void swap(int *x, int *y)
// pass by reference
void swap(int &x, int &y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void printArray(int A[])
{
	int i;
	for (i = 0; i < sizeof(A) / sizeof(A[0]); i++)
	{
		printf("%d ", A[i]);
	}
	cout << endl;
}

int *mapByTwo(int A[])
{
	int i;
	for (i = 0; i < sizeof(A); i++)
	{
		A[i] = A[i] * 2;
	}
}

int main(int argc, char *argv[])
{
	int a, b;
	a = 10;
	b = 20;

	// pass by value
	// swap(a, b);
	// pass pointer
	// swap(&a, &b);
	// pass by reference
	swap(a, b);

	printf("%d %d\n", a, b);

	int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	printArray(A);
	mapByTwo(A);
	printArray(A);
}