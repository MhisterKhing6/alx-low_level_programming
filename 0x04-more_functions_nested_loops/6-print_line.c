#include <stdio.h>
#include "main.h"

/**
 * print_line- print alphabet in lower case'
 * Return: 0
 * @n : number to print
 */
void print_line(int n)
{
int i = 1;
if (n == 0)
{
putchar('\n');
return;
}
for (; i <= n; i++)
putchar('_');
putchar('\n');
}
