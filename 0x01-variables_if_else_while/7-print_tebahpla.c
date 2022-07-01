#include <stdio.h>
/**
 * main- print the alphabets in lower case
 * Return: 0
 */

int main(void)
{
char start = 'z';
while (start >= 'a')
putchar(start--);
putchar('\n');
return (0);
}
