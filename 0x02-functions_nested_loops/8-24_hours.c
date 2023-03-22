#include "main.h"
/**
 *jack_bauer -  Prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int w;

	for (i = 0; i <= 2; i++)
	{
	for (j = 0; j <= 9; j++)
	{
		if ((i < 2 && j <= 9) || (i < 3 && j <= 3))
		{
			for (k = 0; k <= 5; k++)
			{
			for (w = 0; w <= 9; w++)
			{
			_putchar('0' + i);
			_putchar('0' + j);
			_putchar(58);
			_putchar('0' + k);
			_putchar('0' + w);
			_putchar('\n');
			}
			}
		}
	}
	}
}
