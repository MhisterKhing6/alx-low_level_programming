#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * rot13 - print strings to the console
 * @dest: a holder to contained the copied file
 * Return: returns a pointer to the copied folder
 */
char *rot13(char *dest)
{
int size = strlen(dest);
int i = 0;
for (; i < size; i++)
{
if ((dest[i] >= 'a' && dest[i] <= 'z') || (dest[i] >= 'A' && dest[i] <= 'Z'))
{
dest[i] += 13;
}
}
return (dest);
}
