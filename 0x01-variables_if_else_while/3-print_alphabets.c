#include <stdio.h>
/**
 * main- print the alphabets in lower case
 * Return: 0
 */

int main(void)
{
char start = 'a';
char CapStart = 'A';
while (start <= 'z')
putchar(start++);
while (CapStart <= 'Z')
putchar(CapStart++);
putchar('\n');
return (0);
}
