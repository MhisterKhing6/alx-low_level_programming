#include <stdio.h>
#include "main.h"

/**
 * print_triangle- print alphabet in lower case'
 * Return: 0
 * @size : the size of the triangle
 */
void print_triangle(int size)
{
int i = 1;
int v = 1;
int x = 0;
for (; i <= size; i++)
{
v = size - i;
while (v-- > 0)
putchar(' ');
x = i;
while (x-- > 0)
putchar('#');
putchar('\n');
}
putchar('\n');
}

