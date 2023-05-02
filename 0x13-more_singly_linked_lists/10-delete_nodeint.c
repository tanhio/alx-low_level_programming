#include "lists.h"
/**
 * delete_nodeint_at_index -  deletes the node at index index of a listint_t
 * @head: a pointer to the pointer of the list
 * @index: index of the node to be deleted
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new_h = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head).next;
		free(new_h);
		return (1);
	}

	while (i < (index - 1))
	{
		if (!new_h || !((*new_h).next))
			return (-1);
		new_h = (*new_h).next;
		i++;
	}

	current = (*new_h).next;
	(*new_h).next = (*current).next;
	free(current);

return (1);
}
