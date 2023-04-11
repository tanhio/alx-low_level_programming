#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: the string
 * Return: the converted int
 */
int _atoi(char *s)
{
	int i = 0, j = 0, k = 0, l = 0, m = 0, n = 0;

	while (s[l] != '\0')
		l++;

	while (i < l && m = 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			n = s[i] - '0';
			if (j % 2)
				n = -n;
			k = k * 10 + n;
			m = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			m = 0;
		}
		i++;
	}
	if (m == 0)
		return (0);
return (k);
}
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0(success) otherwise 1
 */
int main(int argc, char *argv[])
{
	int i, j, k;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
		i = _atoi(argv[1]);
		j = _atoi(argv[2]);
		k = i * j;

		printf("%d\n", k);
return (0);
}
