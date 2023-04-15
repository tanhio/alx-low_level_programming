#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: the old memory block pointer
 * @old_size: the byte size of the old memory block
 * @new_size: the byte size of the new memory block
 * Return: the new memory block pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		newptr = malloc(new_size);

		if (newptr == NULL)
		{
			return (NULL);
		}
	return (newptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	newptr = malloc(new_size);

	if (newptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && 1 < new_size; i++)
	{
		newptr[i] = ((char *) ptr)[i];
	}

	free(ptr);
return (newptr);
}
