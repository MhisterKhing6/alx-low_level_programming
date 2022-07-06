#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main- Print the times of n numbers'
 * Return: 0
*/
int main(void)
{
long first = 1;
long second = 2;
long current = 0;
int i = 1;
printf("%d, %d", first, second);
for (i ; i <= 48 ; i++)
{
current = first + second;
printf(", %d", current);
first = second;
second = current;
}
return (0);
}

