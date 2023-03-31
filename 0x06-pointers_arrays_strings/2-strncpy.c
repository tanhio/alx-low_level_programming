#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: the string to be copied
 * @src: the copy
 * @n: number of copies
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

return (dest);
}
