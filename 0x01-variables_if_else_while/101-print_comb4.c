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
int control2 = 2;
int thirdDigit  = 2;
for (; firstDigit < 8; ++firstDigit)
{
for (; secondDigit < 9; ++secondDigit)
{
for (; thirdDigit < 10; ++thirdDigit)
{
putchar(firstDigit + '0');
putchar(secondDigit + '0');
putchar(thirdDigit + '0');
if (firstDigit != 7);
{
putchar(',');
putchar(' ');
}
}
thirdDigit = ++control2;
}
secondDigit = ++control;
control2 = 2;
thirdDigit = control2;
}
putchar('\n');
return (0);
}
