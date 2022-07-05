#include <stdio.h>
#include <main.h>
/**
 * _islower - check if a string is lower and returns it'
 * @c : the character to check
 * Return: 1 is c is lower else 0
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
/**
 * main - print _puchar on the command line
 * Return: 0
*/
int main(void)
{
int r;
r = _islower('H');
_putchar(r + '0');
r = _islower('o');
_putchar(r + '0');
r = _islower(108);
_putchar(r + '0');
_putchar('\n');
return (0);
}




