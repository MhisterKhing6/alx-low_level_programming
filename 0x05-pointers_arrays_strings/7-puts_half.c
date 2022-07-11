#include <stdio.h>
#include "main.h"
#include "string.h"
/**
 * puts_half - print String in reverse order
 * @n: a parameter to reset
 */
void puts_half(char *n)
{
unsigned long i = strlen(n) % 2 == 0 ? (strlen(n) / 2)  : (strlen(n) - 1) / 2;
while (i < strlen(n))
putchar(n[i++]);
putchar('\n');
}
