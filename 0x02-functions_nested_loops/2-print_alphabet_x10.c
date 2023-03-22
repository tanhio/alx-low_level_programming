#include "main.h"
/**
 *print_alphabet_x10 - print the alphabet, in lowercase, followed by a new line
 *Return: always 0(success)
 */
void print_alphabet_x10(void)
{
	char c;
	int n = 1;

	while (n < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}
	_putchar('\n');
	n++;
	}
}
