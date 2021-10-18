/*
*   Reverse_Characters.c : Program to print the following characters in a reverse way.

*   Test Characters:'X', 'M', 'L'
*   Expected Output:
    The reverse of XML is LMX
    
 */

#include <stdio.h>

int main(void)
{
    char character1, character2, character3;
    character1 = 'X';
    character2 = 'M';
    character3 = 'L';
    printf("The reverse of %c%c%c is %c%c%c", character1, character2, character3, character3, character2, character1);
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