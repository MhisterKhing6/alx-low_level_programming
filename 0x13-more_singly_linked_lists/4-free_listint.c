#include "lists.h"

/**
 * free_listint - free the heap occupied by the structure
 * @head: heap adddrees to free
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
listint_t *temp = head;

while (head != NULL)
{
head = temp->next;
free(temp);
temp = head;
}
}
