#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"


/**
 * op_add - return sum of 2 numbers
 * @a: first number
 * @b: second number
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the difference of 2 numbers
 * @a: first number
 * @b: second number
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the product of 2 numbers
 * @a: first number
 * @b: second number
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return result of division of 2 numbers
 * @a: first number
 * @b: second number
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - return modulus of 2 numbers
 * @a: first number
 * @b: second number
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
