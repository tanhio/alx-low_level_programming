#include "main.h"

/**
 *puts_half -  Prints half of a string
 *@str: A string
 */

void puts_half(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
	j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
		_putchar('\n');
}
