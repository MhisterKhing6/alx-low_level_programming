#include <stdio.h>
/**
 * main- print the alphabets in lower case
 * Return: 0
 */

int main(void)
{
int start = 0;
while (start <= 9)
{
putchar(start + '0');
if (start != 9)
{
putchar(',');
putchar(' ');
}
++start;
}
putchar('\n');
return (0);
}
