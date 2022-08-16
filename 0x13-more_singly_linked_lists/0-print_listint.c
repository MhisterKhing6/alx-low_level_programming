#include <stddef.h>
#include "lists.h"
#include <stdio.h>
/**
 * print_listint - return nodes in list;
 * @h: Start of list
 * Return: size of list
 */

size_t print_listint(const listint_t *h)
{
size_t lenght = 0;
const listint_t *temp = h;
while (temp != NULL)
{
printf("%d \n", temp->n);
lenght++;
temp = temp->next;
}
return (lenght);
}
