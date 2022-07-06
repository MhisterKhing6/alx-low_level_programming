#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main- Print the times of n numbers'
 * Return: 0
*/
int main(void)
{
int sum = 0;
int i = 0;
while (i < 1024)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
sum += i;
}
i++;
}
printf("%d", sum);
printf("\n");
return (0);
}






