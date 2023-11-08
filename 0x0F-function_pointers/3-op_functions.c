#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - the sum of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - the difference of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - the products of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - the division of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the division of a and b
 */

int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - the remainder of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the remainder of a and b
 */

int op_mod(int a, int b)
{
return (a % b);
}
