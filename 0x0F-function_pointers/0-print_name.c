#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - Print name
 * @name: Contains the name to print
 * @f: a pointer to a fuction that print name
 */
void print_name(char *name, void (*f)(char *))
{
*f(name);
}
