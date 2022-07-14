#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * cap_string - print strings to the console
 * @dest: a holder to contained the copied file
 * Return: returns a pointer to the copied folder
 */
char *cap_string(char *dest)
{
int size = strlen(dest);
int i = 0;
for (; i < size - 1; i++)
{
if (
((dest[i] >= 'a') && (dest[i] <= 'z'))
&&
(dest[i - 1] == '\'' || dest[i - 1] == '.' || dest[i - 1] == ';' ||
dest[i - 1] == '.' ||
dest[i - 1] == '!' || dest[i - 1] == '?'
|| dest[i - 1] == '"' ||  dest[i - 1] == '(' ||
dest[i - 1] ==  ')'  ||  dest[i - 1] == '{'
|| dest[i - 1] == '}' || dest[i - 1] == '\n' ||
dest[i - 1] == ' ' || dest[i-1] == '\t')
)
dest[i] -= 32;
}
return (dest);
}
