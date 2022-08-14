/**
 * int_index - searches for a particular condition in array
 * @size :size of the array
 * @cmp: Functional condition
 * @array: container for the element
 * Return: The the index of the first occurence in array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
while (size > 0 && i < size)
{
if (cmp(array[i]) != 0)
return (i);
i++;
}
return (-1);
}
