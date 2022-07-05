#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_to_98- Print the absolute value of the number'
 * Return: 0
 * @c : integer to check abs value
*/
void print_to_98(int c)
{
if (c < 98)
{
while (c < 98)
{
_putchar(c++ + '0');
_putchar(',');
_putchar(' ');
}
}
else
while (c >= 98)
{
_putchar(c-- + '0');
_putchar(',');
_putchar(' ');
}
}

