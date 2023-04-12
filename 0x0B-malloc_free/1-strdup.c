#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - copy to new memory location
 * @str: the character
 * Return: 0
 */
char *_strdup(char *str)
{
	char *cpStr;
	int i, j;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	cpStr = malloc(sizeof(char) * (i + 1));

			if (cpStr == NULL)
				return (NULL);

			for (j = 0; str[j]; j++)
				cpStr[j] = str[j];

return (cpStr);
}
