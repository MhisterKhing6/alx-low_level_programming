#include <stdlib.h>
#include <stdio.h>
/**
 * int_index - Search for a particular condition in and array
 * @array : container for element
 * @size  : size of array container
 * @cmp   : Function to specify condition
 * Return:  the index of the first occurence of an element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0
while ((size > 0) && (i < size))
{
if (*cmp(array[i]) == 0)
return (i)
i++
}
return (-1);
}
