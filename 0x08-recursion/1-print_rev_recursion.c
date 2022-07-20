#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _print_rev_recursion - files first n values of a buffer with char
 * @s: A buffer to fill
 * Return: the value of  s
 */

void _print_rev_recursion(char *s)
{
s += (strlen(s) - 1);
if (s == (s -  strlen(s) - 1 ))
{
putchar('\n');
return;
}
putchar(*s);
_print_rev_recursion(--s);
}
