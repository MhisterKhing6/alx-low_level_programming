#include <stdio.h>
#include "main.h"
/**
 * print_sign- Print the sign of a number'
 * Return: 0
 */
int print_sign(int c)
{
if (c > 0)
{
_putchar('+');
return (1);
}
else if (c < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0'); 
return (0);
}
}
