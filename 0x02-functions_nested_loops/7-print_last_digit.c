#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit- Print the absolute value of the number'
 * Return: 0
 * @c : integer to check abs value
*/
int print_last_digit(int c)
{
int l;
l = abs(c % 10);
_putchar(l + '0');
return (l);
}
