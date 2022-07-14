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

int rev[13]; 
int i = n - 1;
int j = 0;
for (; i >= 0; i--)
rev[j++] = a[i];
j = 0;
for (; j < n; j++)
a[j] = rev[j];
}
