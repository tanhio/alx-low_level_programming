#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to the pointer to the list
 * @idx: the inteded index to insert the data
 * @n: the value in the node
 * Return: the address of the data
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = *head, *insert;
	unsigned int i;

	insert = malloc(sizeof(listint_t));

	if (!head || !insert)
		return (NULL);

	(*insert).n = n;
	(*insert).next = NULL;

	if (idx == 0)
	{
		(*insert).next = *head;
		*head = insert;
		return (insert);
	}

	for (i = 0; new && i < idx; i++)
	{
		if (i == (idx - 1))
		{
			(*insert).next = (*new).next;
			(*new).next = insert;
			return (insert);
		}
		else
			new = (*new).next;
	}

return (NULL);
}


