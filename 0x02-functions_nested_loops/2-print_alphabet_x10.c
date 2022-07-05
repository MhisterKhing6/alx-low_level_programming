#include <stdio.h>

/**
 * print_alphabet_x10- print alphabet in lower case'
 * return 0
 */
void print_alphabet_x10(void)
{
for (int i = 0; i < 10; i++)
{
char start = 'a';
while (start <= 'z')
putchar(start++);
putchar('\n');
}
}

/**
 * main - print _puchar on the command line
 * Return: 0
 */
int main(void)
{
print_alphabet_x10();
return (0);
}
