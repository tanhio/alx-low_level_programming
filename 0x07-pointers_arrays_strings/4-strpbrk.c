#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string
 * @cccept: the bytes in the string
 * Return: accept or null
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
return ('\0');
}
