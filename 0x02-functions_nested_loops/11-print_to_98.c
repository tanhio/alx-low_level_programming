#include "main.h"
#include <stdio.h>
/**
 *print_to_98 -  Prints all natural numbers from n to 98
 *@n: The first or last natural number
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
			printf("%d, ", i);
			}
			else
			{
			printf("%d\n", i);
			break;
			}
		}
	}
	else
	{
		for (i = 98; i <= n; i++)
		{
			if (i != n)
			{
			printf("%d, ", i);
			}
			else
			{
			printf("%d\n", i);
			break;
			}
		}
	}
}
