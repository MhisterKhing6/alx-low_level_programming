#include "stdio.h"
#include <stddef.h>

/**
 * linear_search - function that searches for an integer
 * @array: array to search through
 * @size: size of the array
 * @value: value to search for
 * Return: the index of the first element
 * for which the cmp function doeas not return 0, or -1
 */

int linear_search(int *array, size_t size, int value)
{
if (array)
{
for (size_t i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
}
return (-1);
}
