#include <stdarg.h>
/**
 * sum_them_all - Give the sum of numbers
 * @n: Number of arguemnts passed
 * @...Numbers passed for summation
 * Return: sum of int
 */

int sum_them_all(const unsigned int n, ...)
{
int j = n;
int sum = 0;
va_list numbers;
va_start(numbers, n);
while (j > 0)
{
sum += va_arg(numbers, int);
j--;
}
va_end(numbers);
return (sum);
}
