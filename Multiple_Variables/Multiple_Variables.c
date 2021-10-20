// Multiple_Variables.c : Program to display multiple variables.
// 
// Sample Variables: a+c, x+c, dx+x, ((int) dx) + ax, a+x, s+b, ax+b, s+c, ax+c, ax+ux
// 
// Declaration:
// int a = 125, b = 12345;
// long ax = 12345678990;
// short s = 4043;
// float x = 2.123459;
// double dx = 1.1415927;
// char c = 'W';
// unsigned long ux = 2541568790;
//
/*
#include <stdio.h>

int main(void)
{
	int a = 125, b = 12345;
	long ax = 12345678990;
	short s = 4043;
	float x = 2.123459;
	double dx = 1.1415927;
	char c = 'W';
	unsigned long ux = 2541568790;
	printf("a + c = %d\n", a + c);
	printf("x + c = %f\n", x + c);
	printf("dx + c = %f\n", dx + x);
	printf("(int)dx + ax = %ld\n", (int)dx + ax);
	printf("a + x = %f\n", a + x);
	printf("s + b = %d\n", s + b);
	printf("ax + b = %ld\n", ax + b);
	printf("s + c = %hd\n", s + c);
	printf("ax + c = %ld\n", ax + c);
	printf("ax + ux = %lu\n", ax + ux);
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
*/
#include <stdio.h> 
int main()
{
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;

    printf("a + c =  %d\n", a + c);
    printf("x + c = %f\n", x + c);
    printf("dx + x = %f\n", dx + x);
    printf("((int) dx) + ax =  %ld\n", ((int)dx) + ax);
    printf("a + x = %f\n", a + x);
    printf("s + b =  %d\n", s + b);
    printf("ax + b = %ld\n", ax + b);
    printf("s + c =  %hd\n", s + c);
    printf("ax + c = %ld\n", ax + c);
    printf("ax + ux = %lu\n", ax + ux);

    return 0;
}