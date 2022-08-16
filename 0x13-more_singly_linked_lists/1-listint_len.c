#include <stddef.h>
#include "lists.h"
#include <stdio.h>
/**
 * listint_len - return nodes in list;
 * @h: Start of list
 * Return: size of list
 */

size_t listint_len(const listint_t *h)
{
size_t lenght = 0;
const listint_t *temp = h;
while (temp != NULL)
{
lenght++;
temp = temp->next;
}
return (lenght);
}
