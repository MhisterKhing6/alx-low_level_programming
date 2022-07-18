#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _memset - files first n values of a buffer with char
 * @s: A buffer to fill
 * @b: The value to fill the s
 * @n: Number of times the value of b should be filled
 * Return: the value of  s
 */

char *_memset(char *s, char b, unsigned int n)
{
return (memset(s, b, n));
}

