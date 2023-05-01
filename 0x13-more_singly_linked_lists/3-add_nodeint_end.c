#include "lists.h"
/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list
 * @head: a pointer to the head node
 * @n: the value in the node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end;
	listint_t *new_list = *head;

	new_end = malloc(sizeof(listint_t));
	if (!new_end)
		return (NULL);

	(*new_end).n = n;
	(*new_end).next = NULL;

	if (*head == NULL)
	{
		*head = new_end;
		return (new_end);
	}

	while ((*new_list).next)
		new_list = (*new_list).next;

	(*new_list).next = new_end;

return (new_end);
}
