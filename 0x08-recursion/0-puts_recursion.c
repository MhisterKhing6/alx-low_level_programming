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
static unsigned int  index = 0;
if (index == strlen(s))
{
putchar('\n');
index = 0;
return;
}
putchar(s[index++]);
_puts_recursion(s);
}
