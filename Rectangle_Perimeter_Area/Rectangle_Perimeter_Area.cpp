/*
*   Rectangle_Perimeter_Area.c : Program to print compute the perimeter and area of a rectangle
    with a height of 7 inches and width of 5 inches.

*   Expected Output:
    Perimeter of rectangle = 24 inches
    Area of rectangle = 35 square inches

 */
#include <stdio.h>

int main(void)
{
    int height = 7, width = 5, perimeter = 2 * (height + width), area = height * width;

    printf("Perimeter of rectangle = %d inches\n", perimeter);
    printf("Area of rectangle = %d square inches\n", area);
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
