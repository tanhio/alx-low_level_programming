#include "main.h"
/**
 *more_numbers - Print 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int i;
	int j = 0;

	while (j < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i == 2 || i == 4)
			{
				continue;
			}
				else
			{
				_putchar(i + '0');
			}
		}
		putchar('\n');
		j++;
	}
}
