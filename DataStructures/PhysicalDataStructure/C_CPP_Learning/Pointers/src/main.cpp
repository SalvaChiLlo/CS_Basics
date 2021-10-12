#include <iostream>
#include <stdlib.h> // Requires for using malloc

using namespace std;

int main(int argc, char *argv[])
{
	/* 
	Pointers are used to:
		1. Accessing Heap
		2. Accessing Resources
		3. Parameter Passing
	*/

	int a = 10; // Data variable;
	int *p;			// Address variable;
	p = &a;

	printf("Value of a is %d and its pointer is %d\n", a, p);
	printf("Value a accessed form pointer p is: %d\n", *p);

	/* 
		With malloc we can reserve memory 
		in this case we are reserving space por 5 integer
		or 5 * 2 bytes = 10 bytes
	*/
	/*
		p = (int *)malloc(5 * sizeof(int));
		    -------		
				Type coercion
	*/
	/*
		This is the same as typing p = new int[5];
	*/
	p = (int *)malloc(5 * sizeof(int));

	// when finished using something you have to delete it.
	// delete is from c++
	delete[] p;
	// free is form Clang
	free(p);
	return 0;
}