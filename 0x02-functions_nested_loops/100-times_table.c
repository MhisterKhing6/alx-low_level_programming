#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_times_table- Print time table of a number'
 * Return: 0
 * @n : number to print time table
*/
void print_times_table(int n)
{
int i = 0;
int j = 0;
for (; i <= n; i++)
{
for (; j <= n; j++)
{
printf("%d", (i*j));
if (j != n)
printf(",   ");
}
j = 0;
printf("\n");
}
}

