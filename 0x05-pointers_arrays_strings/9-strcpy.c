#include "main.h"

/**
 * *_strcpy -  copies the string pointed to by src
 * @dest: The buffer
 * @src: The string
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
		dest[i++] = '\0';
return (dest);
}
