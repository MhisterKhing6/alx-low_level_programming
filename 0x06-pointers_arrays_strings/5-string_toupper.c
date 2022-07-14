#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strcpy - print strings to the console
 * @dest: a holder to contained the copied file
 * @src: a holder to copy string from
 * Return: returns a pointer to the copied folder
 */
char  * string_toupper(char *dest)
{
return (strupr(dest));
}

int main()
{
char * how = "how lhaoisoslk lk";
how = string_toupper(how);
return 0;
}
