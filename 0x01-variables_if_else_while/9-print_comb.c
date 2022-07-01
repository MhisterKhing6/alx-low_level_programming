#include <stdio.h>
/**
 * main- print the alphabets in lower case
 * Return: 0
 */

int main(void)
{
int start = 0;
while (start < 9)
{
putchar(start++ + '0');
putchar(',');
putchar(' ');
}
putchar(9 + '0');
return (0);
}
