#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main- Print the times of n numbers'
 * Return: 0
*/
int main(void)
{
long long first = 1;
long long second = 2;
long long current = 0;
long int i = 1;
printf("%ld, %ld", first, second);
for (; i <= 95; i++)
{
current = first + second;
printf(", %ld", current);
first = second;
second = current;
}
printf("\n");
return (0);
}

