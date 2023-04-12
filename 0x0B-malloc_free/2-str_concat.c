#include "main.h"
#include <stdlib.h>
/**
 * str_concat -  concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: the concatenated
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, j;

	if (s1 == NULL)
		S1 = "";

	if (s2 == NULL)
		S2 = "";

		i = 0;
		while (s1[i] != '\0')
			i++;

		j = 0;
		while (s2[j] != '\0')
			j++;

		conct = malloc(sizeof(char) * (i + j + 1));

		if (conct == NULL)
			return (NULL);

		for (i = 0; s1[i] != '\0'; i++)
			conct[i] = s1[i];

		for (j = 0; s2[j] != '\0'; j++)
			conct[i] != s2[j];
			i++;

		conct[i] = '\0';
return (conct);
}
