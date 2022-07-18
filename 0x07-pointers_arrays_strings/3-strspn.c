#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strspn - files first n values of a buffer with char
 * @s: A buffer to fill
 * @b: The value to fill the s
 * Return: the value of  s
 */

unsigned int  *_strspn(char *s, char *b)
{
return (strspn(s, b));
}

