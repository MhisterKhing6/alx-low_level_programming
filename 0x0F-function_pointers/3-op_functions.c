#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds a and b
 * @a: first number
 * @b: second number
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two number
 * @a: first number
 * @b: second number
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b
 * @a: first number
 * @b: second number
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two number.
 * @a: first number.
 * @b: second number.
 * Return: result.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - obteins the module between two number.
 * @a: first number.
 * @b: second number.
 * Return: result.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
