#include <iostream>
using namespace std;

struct Rectangle
{
	int length;	 // 2 Bytes
	int breadth; // 2 Bytes
};

struct ComplexNum
{
	int real; // 2 Bytes
	int img;	// 2 Bytes
};

struct Student
{
	int roll;					// 2 Bytes
	char name[25];		// 25 Bytes
	char dept[10];		// 10 Bytes
	char address[50]; // 50 Bytes
};

struct Card
{
	int face;	 // 2 Bytes
	int shape; // 2 Bytes
	int color; // 2 Bytes
};

int main(int argc, char *argv[])
{
	Rectangle r = {10, 5}; // Declaration + initialization

	r.breadth = 20;
	r.length = 7;

	printf("Area of rectangle is: %d\n", r.breadth * r.length);

	Student s;
	s.roll = 10;

	return 0;
}