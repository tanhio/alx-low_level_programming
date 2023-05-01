#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list
 * @head: a pointer to the first node
 * @n: the value in the node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_h;

	new_h = malloc(sizeof(listint_t));

		(*new_h).n = n;
		(*new_h).next = *head;
		*head = new_h;

		if (!new_h)
			return (NULL);
	
return (new_h);
}

