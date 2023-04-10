#include "main.h"
/**
 * _strlen - function begins
 * @s: input
 * Return: length of input
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

return (i);
}
