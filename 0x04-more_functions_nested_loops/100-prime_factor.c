#include <stdio.h>
#include <math.h>
/**
 *main - prints the largest prime factor of the number
 *Return: 0
 */
int main(void)
{
	long i, max;
	long j = 612852475143;
	double k = sqrt(j);

		for (i = 1; i <= k; i++)
		{
			if (j % i == 0)
			{
			max = j / i;
			}
		}
			printf("%ld\n", max);
return (0);
}
