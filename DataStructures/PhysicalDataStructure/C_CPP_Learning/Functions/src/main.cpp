#include <iostream>

using namespace std;

int add(int a, int b)
{
	int c;
	c = a + b;
	return c;
}

int main(int argc, char *argv[])
{
	int x, y, z;
	x = 10;
	y = 5;
	z = add(x, y);

	printf("Sum is %d\n", z);
	return 0;
}