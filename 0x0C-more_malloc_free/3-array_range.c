#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: the first member
 * @max: the second member
 * Return: the pointer of the memory location
 */
int *array_range(int min, int max)
{
	int i = 0, *ptr;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * ((max - min) + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
return (ptr);
}
