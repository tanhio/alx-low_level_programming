#include "main.h"
/**
 * _strst - the function begins
 * @haystack: input
 * @needle: input
 * Return: 0(success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0' ; haystack++)
	{
		char *c = haystack;
		char *d = needle;

		while (*c == *d && *d != '\0')
		{
			c++;
			d++;
		}
		if (*d == '\0')
			return (haystack);
	}
return (0);
}
