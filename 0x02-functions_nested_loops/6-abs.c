#include <stdio.h>
#include "main.h"
/**
 * _abs- Print the absolute value of the number'
 * Return: 0
 * @c : integer to check abs value
*/
int _abs(int c)
{
if (c > 0)
{

return (c);
}
else if (c < 0)
{
return (-1 * c);
}
else
{
return (0);
}
}
