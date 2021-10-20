// Circle_Perimeter_Area.c : Program to compute the perimeter(circumference) and area of a circle with a given radius.
// 
// Expected Output:
// Perimeter of the Circle = 37.680000 inches
// Area of the Circle = 113.040001 square inches
//

#include <stdio.h>

int main()
{
	const float pi = 22 / 7;
	int radius;
	float circumference, area;
	radius = 10;
	circumference = 2*pi*radius;
	area = pi*radius*radius;
	printf("Perimeter of the Circle = %f inches\n", circumference);
	printf("Area of the Circle = %f square inches\n", area);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
