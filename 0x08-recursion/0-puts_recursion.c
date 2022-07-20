#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _puts_recursion - files first n values of a buffer with char
 * @s: A buffer to fill
 * Return: the value of  s
 */

void _puts_recursion(char *s)
{
if (s == (s + strlen(s)))
{
putchar('\n');
return;
}
putchar(*(s++));
_puts_recursion(s);
}
