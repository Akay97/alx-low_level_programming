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
	printf("Size of char:%lu byte(s)\n", sizeof(b));
	printf("Size of int:%lu byte(s)\n", sizeof(c));
	printf("Size of long int:%lu byte(s)\n", sizeof(d));
	printf("Size of long long int:%lu byte(s)\n", sizeof(e));
	printf("Size of float:%lu byte(s)\n", sizeof(f));
	return (0);
}
