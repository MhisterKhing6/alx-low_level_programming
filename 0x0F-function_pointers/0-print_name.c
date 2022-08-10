/**
 * print_name - Print a name by passing it to a function
 * @name: Name to print
 * @f: Function that print the name
 * Return : Nothing
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
