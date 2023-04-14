#include "main.h"
#include <stdlib.h>
/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: an array
 * @size: the number of bytes to free in the allocared memory
 *Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, j = nmemb * size;
	char *ptr = &(malloc(nmemb * size));


	if (nmemb == 0 || size == 0 || ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < j; i++)
	{
		ptr[i] = 0;
	}
return (ptr);
}

