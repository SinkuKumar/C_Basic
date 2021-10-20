// Integer_Sum.c : Program to accepts two integers from the user and calculate the sum of the two integers.
// 
// Test Data:
// Input the first integer : 25
// Input the second integer : 38
// 
// Expected Output:
// Sum of the above two integers = 63
//

#include <stdio.h>

int main()
{
    int firstInteger, secondInteger, sum;
    printf("\nEnter the first integer: ");
    scanf_s("%d", &firstInteger);
    printf("Enter the second integer: ");
    scanf_s("%d", &secondInteger);
    sum = firstInteger + secondInteger;
    printf("Sum of above two integers = %d\n", sum);
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
