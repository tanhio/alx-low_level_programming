#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: a string
 * Return: The length of a string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;

return (length);

}
