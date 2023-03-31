#include "main.h"

/**
 * rot13 -  encodes a string using rot13
 * @src: the string
 * Return: the encoded string
 */

char *rot13(char *src)
{
	int i, j;
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; src[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (src[i] == c[j])
			{
				src[i] = d[j];
				break;
			}
		}
	}
return (src);
}
