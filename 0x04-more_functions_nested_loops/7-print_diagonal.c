#include <stdio.h>
#include "main.h"

/**
 * print_diagonal- print alphabet in lower case'
 * Return: 0
 * @n : parameter to print
 */
void print_diagonal(int n)
{
if (n == 0)
{
putchar('\n');
return;
}
int i = 1;
for (; i <= n; i++)
{
int k = i;
while (k-- > 1)
{
putchar(' ');
}
putchar('\\');
putchar('\n');
}
}

