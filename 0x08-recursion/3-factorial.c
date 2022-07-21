#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
#include <math.h>
/**
 * factorial- calculate the factorial of a number
 * @n: a number to calculate the factorial
 * Return: the calculated factorial of n
 */

int factorial(int n)
{
if (n < 0)
return (-1);
else
if (n == 0)
return (1);
return (int) (n * factorial(n - 1));
}
