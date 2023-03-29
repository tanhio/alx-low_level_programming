#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the program 101-crackme
 * Return: Always 0
 */

int main(void)
{
	char c[84];
	int i = 0, sum = 0, half1, half2;

	srand(time(0));

	while (sum < 2772)
	{
		c[i] = 33 + rand() % 94;
		sum = c[i++];
	}

	c[i] = '\0';

	if (sum != 2772)
	{
		half1 = (sum - 2772) / 2;
		half2 = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
		half1++;

		for (i = 0; c[i]; i++)
		{
			if (c[i] >= (33 + half1))
			{
				c[i] -= half1;
				break;
			}
		}

		for (i = 0; c[i]; i++)
		{
			if (c[i] >= (33 + half2))
			
				c[i] -= half2;
				break;
			}
		}
	}

	printf("%s", c);
	return (0);
}
