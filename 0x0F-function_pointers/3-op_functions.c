#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns sum of two numbers
 * @a: number 1
 * @b: number 2
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two numbers
 * @a: number 1
 * @b: number 2
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two numbers
 * @a: number 1
 * @b: number 2
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the quotient of two numbers
 * @a: number 1
 * @b: number 2
 * Return: quotient of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of division
 * @a: number 1
 * @b: number 2
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
