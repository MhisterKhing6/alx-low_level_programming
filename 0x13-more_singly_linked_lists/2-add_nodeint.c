#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * add_nodeint - Add element to the first element
 * @n: Number to assign to node
 * @head: The start of the node
 * Return: The address of the new list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *start = malloc(sizeof(listint_t));
if (start == NULL)
return (NULL);
start->n = n;
start->next =  *head;
*head = start;
return (start);
}
