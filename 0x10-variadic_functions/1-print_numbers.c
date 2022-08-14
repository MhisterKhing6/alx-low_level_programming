/**
 * print_numbers - Print numbers to the console
 * @seperator: a string to seperate numbers
 * @n : number of numbers to be printed
 * @... : actual numbers to print
 * Return: Nothing
 */
#include "variadic_functions.h"
void print_numbers(const char *seperator, const unsigned int n, ...)
{
int j = n;
va_list numbers;
va_start(numbers, n);
while (j > 0)
{
printf("%d", va_arg(numbers, int));
if (j != 1)
printf("%s", seperator);
j--;
}
printf("\n");
va_end(numbers);
}
