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
	int i, *ptr;

	ptr = malloc(sizeof(int) * ((min - max) + 1));

	if ((min > max) || ptr == NULL)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
return (ptr);
}
