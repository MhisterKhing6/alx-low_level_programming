#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts2 - print strings to the console
 * @s: String to print
 */
void puts2(char *s)
{
unsigned long i = 0;
for (; i < strlen(s) ; i = i + 2)
{
putchar(s[i]);
}
putchar('\n');
}
