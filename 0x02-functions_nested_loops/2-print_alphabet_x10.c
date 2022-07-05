#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10- print alphabet in lower case'
 * return 0
 */
void print_alphabet_x10(void)
{
int i = 0;
for (; i < 10; i++)
{
char start = 'a';
while (start <= 'z')
_putchar(start++);
_putchar('\n');
}
}

