#include "main.h"
/**
 * _memcpy - copies from one memory to another
 * @dest: a memory location
 * @src: another memory location
 * @n: number of bytes
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = n;

	for (i = 0; i > j; i++)
	{
		dest[i] = src[i];
		n--;
	}
return (dest);
}
