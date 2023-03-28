#include "main.h"

/**
 *rev_string - Reverses a string
 *@s: A string
 */

void rev_string(char *s)
{
	int length = 0;
	int i = 0;
	char swap;

	while (s[i++])
	length++;

	for (i = length - 1; i >= length / 2; i--)
	{
		swap = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = swap;
	}
}
