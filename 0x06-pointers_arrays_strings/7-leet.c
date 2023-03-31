#include "main.h"

/**
 * leet - encodes a string into 1337
 * @src: string
 * Return: value of src
 */

char *leet(char *src)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; src[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (src[i] == s1[j])
			{
				src[i] = s2[j];
			}
		}
	}
return (src);
}
