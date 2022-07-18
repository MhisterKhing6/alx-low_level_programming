#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * print_diagsums - files first n values of a buffer with char
 * @a: A string to print
 * @size: the size of the string
 */

void print_diagsums(int a[][], int size)
{
int i = 0;
int j = 0;
int sum = 0;
for (; i < size, i++)
{
for (; j < size; j++)
{
if (i == j)
sum += a[i][j];
}
j = i;
}
printf("%d", sum);
}
