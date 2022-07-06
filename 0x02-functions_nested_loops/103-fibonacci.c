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
long long current = 1;
long long sum = 2;
int i = 1;
while (current <= 4000000)
{
current = first + second;
if (current  % 2 == 0)
sum += current;
first = second;
second = current;
}
printf("%d\n", sum);
return (0);
}

