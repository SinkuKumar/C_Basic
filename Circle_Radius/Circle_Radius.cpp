// Circle_Radius.c : Program to compute radius of a circle with given circumference or area.
// Expected Output:
// Enter a given character to make a choice(a:area, c : circumference): a
// Enter the area of the circle:
// Radius of circle is:
// Circumference of Circle is:
// 
// Enter a given character to make a choice (a:area, c: circumference): c
// Enter the circumference of the circle:
// Radius of circle is:
// Area of Circle is:
//

#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>


int main()
{
    char choice;
    float area, circumference, radius;
    printf("\nEnter a given character to make a choice(a:area, c : circumference):");
    scanf_s("%c", &choice);
    printf("%c", choice);
    if ((char)choice == 'a' || 'A')
    {
        printf("\nEnter the area of the circle:");
        scanf_s("%", &area);
        radius = sqrt(area / M_PI);
        circumference = 2 * M_PI * radius;
        printf("\nRadius of circle is: %f", radius);
        printf("\nCircumference of circle is: %f", circumference);
    }
    if ((char)choice == 'c' || 'C')
    {
        printf("\nEnter the circumference of the circle:");
        scanf_s("%f", &circumference);
        radius = circumference / (2 * M_PI);
        area = M_PI * radius * radius;
        printf("\nRadius of circle is: %f", radius);
        printf("\nArea of circle is: %f", area);
    }
    else
    {
        printf("Invalid option please try again:");
    }
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
