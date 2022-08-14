/**
 * print_strings - print string to the console
 * @seperator: to seperate strings
 * @n: number of strings given
 * @... : actual strings to print
 * Return: Nothing
 */
#include "variadic_functions.h"
void print_strings(const char *seperator, const unsigned int n, ...)
{
int j = n;
va_list Va_strings;
va_start(Va_strings, n);
while (j > 0)
{
char *stringVa = va_arg(Va_strings, char *);
if (stringVa == NULL)
printf("%s", "(nil)");
else
printf("%s", stringVa);
if ((j != 1) && (seperator != NULL))
printf("%s", seperator);
j--;
}
printf("\n");
va_end(Va_strings);
}
