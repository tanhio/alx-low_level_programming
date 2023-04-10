#include "main.h"
/**
 * _atoi - the function begins
 * @s: input
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 1;
	int j = 0;
	unsigned int k = 0;

	while (!(s[j] <= '9' && s[j] >= '0') && s[j] != '\0')
	{
		if (s[i] == '-')
			i *= -1;
		j++;
	}
	while (s[j] <= '9' && (s[j] >= '0' && s[j] != '\0'))
	{
		k = (k * 10) + (s[i] - '0');
		j++;
	}
	j *= i;
return (k);
}
