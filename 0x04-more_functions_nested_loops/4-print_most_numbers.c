#include "main.h"
/**
 *print_most_numbers -  Print the numbers, from 0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{
	for (i = 0; i < 10; i++)
	{
		if (i != 2 || i != 10)
		{
			_putchar(i + '0');
		}
			_putchar('\n');
}
