/*
*	C_Version.c : C program to get the C version you are using.

*	Expected Output:
	We are using c18!
*/

#include<stdio.h>

int main(void)
{
#if __STDC_VERSION__ >=  201710L
	printf("We are using C18!\n");
#elif __STDC_VERSION__ >= 201112L
	printf("We are using C11!\n");
#elif __STDC_VERSION__ >= 199901L
	printf("We are using C99!\n");
#else
	printf("We are using C89/C90!\n");
#endif
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
