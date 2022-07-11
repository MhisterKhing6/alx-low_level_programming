#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts2 - print strings to the console
 * @s: String to print
 */
void puts2(char *s)
{
int i = 0;
for (; i < strlen(s) ; i = i + 2)
{
putchar(s[i]);
}
putchar('\n');
}
int main()
{
char * s = "Howareyou";
puts2(s);
return 0;
}
