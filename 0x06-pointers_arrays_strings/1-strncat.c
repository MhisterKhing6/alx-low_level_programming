#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strncat - print strings to the console
 * @dest: a holder to contained the copied file
 * @src: a holder to copy string from
 * @n : number of strinc to cat
 * Return: returns a pointer to the copied folder
 */
char  *_strncat(char *dest, char *src, int n)
{
return (strncat(dest, src, n));
}
