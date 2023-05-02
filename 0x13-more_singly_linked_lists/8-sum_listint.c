#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: a pointer to the list
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	listint_t *new = head;
	int i = 0;

	while (new)
	{
		i += (*new).n;
		new = (*new).next;
	}

return (i ? i : 0);
}
