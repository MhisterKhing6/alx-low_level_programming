#include <stdio.h>
/**
 * main- print the alphabets in lower case
 * Return: 0
 */

int main(void)
{
char start = 'a';
int number = 0;
while (number <= 15)
{
if (number > 9)
putchar(start++);
else
putchar(number + '0');
++number;
}
putchar('\n');
return (0);
}
