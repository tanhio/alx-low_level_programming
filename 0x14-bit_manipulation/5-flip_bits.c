#include "main.h"
/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			j++;
	}

return (j);
}
