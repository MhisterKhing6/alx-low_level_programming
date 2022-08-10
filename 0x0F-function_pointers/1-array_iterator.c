#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - perform operation on itegers in array using a
 * passed in function
 * @arr : an array containing values to be operated
 * @size : size of an array
 * @action : function to perfrom operation
 * Return: Nothing
 */
void array_iterator(int *arr, size_t size, void (*action) (int))
{
size_t i = 0;
for (; i < size; i++)
action(arr[i]);
}
