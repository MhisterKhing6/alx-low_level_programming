#include "stdio.h"
#include <stddef.h>
/**
 * print_ar - print values in array to stdout
 * @array: array to pring
 * @low: where the printing should start from
 * @high: where the printin should end
 * Return: void
 */
void print_ar(int  *array, size_t low, size_t high)
{
size_t j = low;
printf("Searching in array: ");
for (; j <= high; j++)
{
if (j == high)
{
printf("%d\n", array[j]);
}
else
{
printf("%d, ", array[j]);
}
}
}

/**
 * bin - uses recursive binary search alg
 * @array: array to search for a value
 * @low: where array start from
 * @high: where arry ends
 * @value: value to search in array
 * Return: index of value or -1
 */
int bin(int array[], size_t low, size_t high, int x) {
  size_t mid;
  while (low <= high) {
    print_ar(array, low, high);
    mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

/**
 * binary_search - search for a value using binary search argorithm
 * @array: array to search through
 * @size: size of the array
 * @value: value to search for
 * Return: the index of the first element
 * for which the cmp function doeas not return 0, or -1
 */
int binary_search(int *array, size_t size, int value)
{
return (bin(array, 0, size - 1, value));
}
