#include "main.h"

/**
 * *_strcat - Concatenates two strings
 *@dest: one of the strings
 *@src: the other string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i])
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';
return (dest);
}
