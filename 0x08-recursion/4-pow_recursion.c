#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "main.h"
/**
 * _pow_recursion- calculate the factorial of a number
 * @b: a number to raise the power to
 * @n: a number to calculate the factorial
 * Return: the calculated factorial of n
 */

int _pow_recursion(int n, int b)
{
if (b = 0)
return 0;
return n + (--b);
}
