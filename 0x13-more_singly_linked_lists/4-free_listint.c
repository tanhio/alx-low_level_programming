#include "lists.h"
/**
 * free_listint - frees a list
 * @head: a pointer to the list
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while (head)
	{
		new = (*head).next;
		free(head);
		head = new;
	}
}
