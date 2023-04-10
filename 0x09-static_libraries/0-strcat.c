#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: on of the strings
 * @src: the other string
 * Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		i++;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
return (dest);
}
