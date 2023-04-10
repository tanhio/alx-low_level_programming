#include "main.h"
/**
 * _strcmp - function begins
 * @s1: input
 * @s2: input
 * Return: the difference between the no. of characters b/t the two strings
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
return (0);
}
