// Days_Conversion.c : Program to convert specified days into years, weeks and days.
// 
// Note: Ignore leap year.
//
// Test Data :
// Number of days : 1329
// 
// Expected Output :
// Years: 3
// Weeks : 33
// Days : 35
//

#include <stdio.h>


int main()
{
    int inputDays, remainingDays, years, weeks, days;
    printf("Number of days: ");
    scanf_s("%d", &inputDays);
    years = inputDays / 365;    // Ignoring leap years
    remainingDays = inputDays % 365;
    weeks = remainingDays / 7;
    days = remainingDays % 7;
    printf("\nYears: %d", years);
    printf("\nWeeks: %d", weeks);
    printf("\nDays: %d\n", days);
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
