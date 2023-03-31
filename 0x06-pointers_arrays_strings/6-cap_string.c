#include "main.h"

/**
 * cap_string - capitalizes all words of a strings
 * @src: the strings
 * Return: the capitalize string
 */

char *cap_string(char *src)
{
	int i;

	while (src[i])
	{

	while (!(src[i] >= 'a' && src[i] <= 'z'))
	{
		i++;

		if (src[i - 1] == ';' || src[i - 1] == '.' || src[i - 1] == ',' || src[i - 1] == '!' || src[i - 1] == '?' || src[i - 1] == '"' || src[i - 1] == '(' || src[i - 1] == ')' || src[i - 1] == '{' || src[i - 1] == '}' || src[i - 1] == '\n' || src[i - 1] == '\t' || i == 0)
		{
			src[i] -= 32;
			i++;
		}
	}
	}
return (src);
}
