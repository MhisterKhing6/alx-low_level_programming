#include <stdio.h>
#include "main.h"

/**
 * print_square- print alphabet in lower case'
 * Return: 0
 * @c : side of square
 */
void print_square(int c)
{
int i = 1;
int second = 1;
if (c <= 0)
{
putchar('\n');
}
for (; i <= c; i++)
{
for (; second <= c; second++)
{
putchar('#');
}
putchar('\n');
second = 1;
}
}

