#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print the last digit of a number
 * Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%d\n", (n % 10));
return (0);
}
