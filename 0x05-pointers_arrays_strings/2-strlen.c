#include <stdio.h>
#include "main.h"
/**
 * _strlen - reset a value to 98
 * @n: a parameter to reset
 * Return: return the lenght of the string
 */
int _strlen(char *n)
{
char stop = '\0';
int i = 0;
while (*(n + i++) != stop)
{};
return (i - 1);
}
