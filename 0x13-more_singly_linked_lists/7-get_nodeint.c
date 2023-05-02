#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: a pointer to the list
 * @index: the index of the node
 * Return: the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new = head;
	unsigned int i = 0;

	while (new && i < index)
	{
		new  = (*new).next;
		i++;
	}

return (new ? new : NULL);
}
