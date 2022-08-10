#include <stdio.h>

/**
 * array_iterator - performs actioins on arrays element
 * @array: conatiner of elements
 * @size: size of the array
 * @f: A functional operation to perform
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*f)(int))
{
size_t i = 0;
while (i < size && size > 0)
{
f(array[i]);
i++;
}
}
