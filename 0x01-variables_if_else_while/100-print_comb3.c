#include <stdio.h>
/**
 * main- print the alphabets in lower case
 * Return: 0
 */

int main(void)
{
int firstDigit = 0;
int control = 1;
int secondDigit = control;
for (; firstDigit < 9; ++firstDigit)
{
for (; secondDigit < 10; ++secondDigit)
{
putchar(firstDigit + '0');
putchar(secondDigit + '0');
if (firstDigit != 8)
{
putchar(',');
putchar(' ');
}
}
secondDigit = ++control;
}
putchar('\n');
return (0);
}
