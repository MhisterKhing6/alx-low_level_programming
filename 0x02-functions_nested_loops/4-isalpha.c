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
/**
 * main - print _puchar on the command line
 * Return: 0
*/
int main(void)
{
int r;
r = _isalpha('H');
_putchar(r + '0');
r = _isalpha('o');
_putchar(r + '0');
r = _isalpha(108);
_putchar(r + '0');
r = _isalpha(';');
_putchar(r + '0');
_putchar('\n');
return (0);
}




