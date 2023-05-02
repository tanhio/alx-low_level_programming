#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: a pointer to the pointer to the list
 * Return: the deleted data
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int i;

	if (!*head || !head)
	{
		return (0);
	}

	i = (**head).n;
	new = (**head).next;
	free(*head);
	*head = new;

return (i);
}
