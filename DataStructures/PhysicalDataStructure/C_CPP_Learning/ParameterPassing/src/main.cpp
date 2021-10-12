#include <iostream>

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

	printf("%d %d", a, b);
}