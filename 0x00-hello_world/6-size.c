#include <stdio.h>

/**
 * main - the  entry into the code
 *
 * Return: returning (0) means success.
 */
int main(void)
{
char b;
int c;
long int d;
long long int e;
float f;
	printf("Size of a char:%lu byte(s)\n", sizeof(b));
	printf("Size of an int:%lu byte(s)\n", sizeof(c));
	printf("Size of a long int:%lu byte(s)\n", sizeof(d));
	printf("Size of a long long int:%lu byte(s)\n", sizeof(e));
	printf("Size of a float:%lu byte(s)\n", sizeof(f));
	return (0);
}
