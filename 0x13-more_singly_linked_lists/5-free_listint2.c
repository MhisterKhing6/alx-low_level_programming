#include "lists.h"

/**
 * free_listint2 - free the heap occupied by the structure
 * @head: heap adddrees to free
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
listint_t *temp = *head;
listint_t *start = *head;
if (head == NULL)
return;

while (start != NULL)
{
start = temp->next;
free(temp);
temp = start;
}
&head = NULL;
}
