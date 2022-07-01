#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Print the last digit of a number
 * Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int LastDigit = n % 10;
printf("%d\n", LastDigit);
return (0);
}
