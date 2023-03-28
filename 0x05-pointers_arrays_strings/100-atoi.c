#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: A string
 * Return: an integer
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int ni = 0;
	int min = 1;
	int isl = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			min *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			isl = 1;
		ni = (ni * 10) + (s[i] - '0');
		i++;
		}
		if (isl == 1)
		{
			break;
		}
		i++;
		}
	ni *= min;
	return (ni);
}
