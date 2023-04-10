#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: input
 * @src: input
 * @n: input
 * Return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for ( j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
return (dest);
}
