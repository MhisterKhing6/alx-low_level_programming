#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: int
 * Return: pointer to the allocated memory or NULL
 */

void *malloc_checked(unsigned int b)
{
	int *x = malloc(b);

	if (x == 0)
	{
		exit(98);
	}

	return (x);
}
