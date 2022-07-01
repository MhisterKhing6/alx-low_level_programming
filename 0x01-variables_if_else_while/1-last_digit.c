#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- print the last number of a random number and comp
 * Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int LastDigit;
LastDigit = (n % 10);
printf("Last digit of %d is %d and is ", n, LastDigit);
if (LastDigit > 5)
{
printf("greater than 5\n");
}
else if (LastDigit == 0)
{
printf("0\n");
}
else
{
printf("less than 6 and not 0\n");
}
return (0);
}
