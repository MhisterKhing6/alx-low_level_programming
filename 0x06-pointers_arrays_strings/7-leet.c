#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * leet - print strings to the console
 * @dest: a holder to contained the copied file
 * Return: returns a pointer to the copied folder
 */
char  *leet(char *dest)
{
int size = strlen(dest);
int i = 0;
for (; i < size; i++)
{
if (dest[i] == 'a' || dest[i]  == 'A')
dest[i] = 4 + '0';

if (dest[i] == 'e' || dest[i]  == 'E')
dest[i] = 3 + '0';

if (dest[i] == 'o' || dest[i]  == 'O')
dest[i] = 0 + '0';

if (dest[i] == 't' || dest[i]  == 'T')
dest[i] = 7 + '0';

if (dest[i] == 'l' || dest[i]  == 'L')
dest[i] = 1 + '0';
}
return (dest);
}
