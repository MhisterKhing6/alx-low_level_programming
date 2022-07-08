#include <stdio.h>
#include "main.h"

/**
 * main- print alphabet in lower case'
 * Return: 0
 */
int main(void)
{
int start = 1;
for (; start <= 100; start++)
{
if ((start % 3 == 0) && (start % 5 == 0))
printf("FizzBuzz");
else if (start % 3 == 0)
printf("Fizz");
else if (start % 5 == 0)
printf("Buzz");
else
printf("%d", start);
if (start != 100)
printf(" ");
}
printf("\n");
return (0);
}
