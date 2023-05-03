#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: a pointer to the address of the first list
 * Return: a pointer to the new list's first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *new = NULL;
	listint_t *old = NULL;

	while (*head)
	{
		new = (**head).next;
		(**head).next = old;
		old = *head;
		*head = new;
	}

	*head = old;

	return (*head);
}
