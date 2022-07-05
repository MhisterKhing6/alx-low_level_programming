#include <stdio.h>
#include "main.h"
/**
 * _isalpha - check if a string is lower and returns it'
 * @c : the character to check
 * Return: 1 is c is lower else 0
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}

