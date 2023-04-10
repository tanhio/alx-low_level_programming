#include "main.h"
/**
 * _memset - to fill a certain memory address with an intended data
 * @s: address of memory
 * @b: the data
 * @n: number of bytes to be used
 * Return: s with changed n
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
{
	s[i] = b;
	n--;
}
return (s);
}
