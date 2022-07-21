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
if (*str)
{
_print_rev_recursion(s + 1);
putchar(*str);
}
}
