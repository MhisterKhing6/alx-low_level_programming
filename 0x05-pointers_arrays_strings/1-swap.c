#include <stdio.h>
#include "main.h"
/**
 * swap_int - reset a value to 98
 * @a: a parameter to reset
 * @b: a parameter to check
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

