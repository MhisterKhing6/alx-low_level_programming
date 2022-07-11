#include <stdio.h>
#include "main.h"
/**
 * print_rev - print String in reverse order
 * @n: a parameter to reset
 */
void print_rev(char *n)
{
char stop = '\0';
int i = 0;
while (*(n + i++) != stop)
{};
i = i - 1;

while (i >= 0)
putchar(n[i--]);
putchar('\n');
}

