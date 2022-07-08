#include <stdio.h>
#include "main.h"

/**
 * print_numbers- print alphabet in lower case'
 * return 0
 */
void print_numbers(void)
{
int start = 0;
while (start <= 9)
_putchar(start++ + '0');
putchar('\n');
}

