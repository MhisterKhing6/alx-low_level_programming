#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10- print alphabet in lower case'
 * return 0
 */
void print_alphabet(void)
{
char start = 'a';
while (start <= 'z')
_putchar(start++);
putchar('\n');
}

/**
 * main - print _puchar on the command line
 * Return: 0
 */
int main(void)
{
print_alphabet();
return (0);
}
