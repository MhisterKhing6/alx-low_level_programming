#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * print_diagsums - files first n values of a buffer with char
 * @a: A string to print
 * @size: the size of the string
 */

void print_diagsums(int *a, int size)
{
int i = 0;
int rev = size - 1;
int re = rev;
int sum = 0;
int sum1 = 0;
int multiple = size + 1;
for (; i < size; i++)
{
sum += a[multiple * i];
sum1 += a[rev];
rev += re;
}
printf("%d, %d\n", sum, sum1);
}
