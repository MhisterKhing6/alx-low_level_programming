#include <stdio.h>
#include "main.h"
#include "string.h"
/**
 * reverse_array - print String in reverse order
 * @n: a parameter to reset
 * @a: a container
 */

void reverse_array(int *a, int n)
{
int aux[n];
for (int i = 0; i < n; i++)
{
aux[n - 1 - i] = a[i];
}

for (int i = 0; i < n; i++)
{
a[i] = aux[i];
}
}
