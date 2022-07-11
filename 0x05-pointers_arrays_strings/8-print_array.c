#include <stdio.h>
#include "main.h"
/**
 * print_array - print n element of an array
 * @a: an array
 * @n: a parameter
 */
void print_array(int *a, int n)
{
int i = 0;
for (; i < n; i++)
printf("%d", a[i]);
putchar('\n');
}

