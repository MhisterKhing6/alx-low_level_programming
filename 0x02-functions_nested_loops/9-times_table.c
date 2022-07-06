#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * times_table- Print the absolute value of the number'
 * Return: 0
*/
void times_table(void)
{
int i = 0;
int j = 0;
for (; i <= 9; i++)
{
for (; j <= 9; j++)
{
printf("%d", (i * j));
if (j != 9)
printf(", ");
}
j = 0;
}
}

