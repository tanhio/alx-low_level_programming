#include "main.h"
#include <stdlib.h>
/**
 * _save - save a character in a memory
 * @dest: the memory
 * @c: the character
 * @n: number characters to be copied
 * Return: pointer to the memory
 */
char *_save(char *dest, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = c;
	}
return (dest);
}
/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: an array
 * @size: the number of bytes to free in the allocared memory
 *Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	ptr = malloc(nmemb * size);

	if (ptr == NULL || nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	_save(ptr, 0, (size * nmemb));
return (ptr);
}

