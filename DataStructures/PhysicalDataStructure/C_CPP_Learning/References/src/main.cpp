#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int a = 10;
	// a is also called r
	int &r = a;

	printf("Value of a is %d, and value of reference r is %d\n", a, r);

	r++;
	printf("Value of a is %d, and value of reference r is %d\n", a, r);

	a++;
	printf("Value of a is %d, and value of reference r is %d\n", a, r);

	return 0;
}