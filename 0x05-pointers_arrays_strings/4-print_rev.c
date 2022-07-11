#include <stdio.h>
#include "main.h"
#include "string.h"
/**
 * print_rev - print String in reverse order
 * @n: a parameter to reset
 */
void print_rev(char *n)
{
int i = strlen(n) - 1;
while (i >= 0)
putchar(n[i--]);
putchar('\n');
}
