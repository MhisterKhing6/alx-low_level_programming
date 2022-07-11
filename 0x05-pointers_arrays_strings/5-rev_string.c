#include <stdio.h>
#include "main.h"
#include "string.h"
/**
 * print_rev - print String in reverse order
 * @n: a parameter to reset
 */
void rev_string(char *n)
{
char ss = ' ';
char ends = ' ';
int i = strlen(n) - 1;
int start = 0;
while (start <= i)
{
ends = *(n + i);
ss  = *(n  + start);
*(n + i--) = ss;
*(n + start++) = ends;
}
}

int main(void)
{
char * t = "how";
char * v = "Anna";
int j = 0 ;
rev_string(t);
return 0;
}
