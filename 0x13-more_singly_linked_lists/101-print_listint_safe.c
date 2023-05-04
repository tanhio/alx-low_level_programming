#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts the unique nodes
 * @head: a pointer to the list
 * Return: the number of the unique nodes or 0
 */
size_t looped_listint_len(const listint_t *head)
{
	size_t nodes = 1;
	const listint_t *turttle, *rabbit;

	if (head == NULL || (*head).next == NULL)
		return (0);

	turttle = head->next;
	rabbit = (head->next)->next;

	while (rabbit)
	{
		if (turttle == rabbit)
		{
			turttle = head;
			while (turttle != rabbit)
			{
				nodes++;
				turttle = turttle->next;
				rabbit = rabbit->next;
			}

			turttle = turttle->next;

			while (turttle != rabbit)
			{
				nodes++;
				turttle = turttle->next;
			}

			return (nodes);
		}

		turttle = turttle->next;
		rabbit = (rabbit->next)->next;
	}

	return (0);
}
/**
 *print_listint_safe - prints a listint_t list
 *@head: a pointer to the list
 *Return: thr number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("->[%p]%d\n", (void *)head, head->n);
	}

return (nodes);
}
