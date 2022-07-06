#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * jack_bauer- Print the absolute value of the number'
 * Return: 0
*/
void jack_bauer(void)
{
int i = 0;
int j = 0;
int k = 0;
int l = 0;
for (; i <= 2; i++)
{
for (; j <= 3; j++)
{
for (; k <= 5; k++)
{
for (; l <= 9; l++)
{
_putchar(i + '0');
_putchar(j + '0');
_putchar(':');
_putchar(k + '0');
_putchar(l + '0');
_putchar('\n');
}
l = 0;
}
k = 0;
}
k = 0;
}
}

