#include "main.h"
/**
 *times_table -  Prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i;
	int j;
	int k;
	int w;
	int q;
	int r;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	k = i * j;

		if (k > 9)
		{
		w = k % 10;
		q = k - w;
		r = q / 10;
		_putchar(44);
		_putchar(32);
		_putchar('0' + r);
		_putchar('0' + w);
		}
		else
		{
		if (j != 0)
		{
		_putchar(44);
		_putchar(32);
		_putchar(32);
		}
		_putchar('0' + k);
		}
		}
		_putchar('\n');
		}
}
