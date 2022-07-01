#include <stdio.h>
/**
 * main- print the alphabets in lower case
 * Return: 0
 */

int main(void)
{
char start = 'a';
while (start <= 'z')
putchar(start++);
putchar('\n');
return (0);
}
