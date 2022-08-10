#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "main.h"
/**
 * _sqrt_recursion- calculate the factorial of a number
 * @b: a number to raise the power to
 * @n: a number to calculate the factorial
 * Return: the calculated factorial of n
 */

int _sqrt_recursion(int n, int b = 1;)
{
if ( b*b > n)
return (-1);
if ((b * b == n )  0)
return (1);
return _sqrt_recursion(n, b++);
}
