#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * add_nodeint_end - Add element to the first element
 * @n: Number to assign to node
 * @head: The start of the node
 * Return: The address of the new list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp = *head;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
