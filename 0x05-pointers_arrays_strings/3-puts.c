#include <stdio.h>
#include "main.h"
/**
 * _puts - print strings to the console
 * @s: String to print
 */
void _puts(char *s)
{
int i = 0;
while (s[i] != '\0')
{
putchar(s[i]);
i++;
}
putchar('\n');
}

