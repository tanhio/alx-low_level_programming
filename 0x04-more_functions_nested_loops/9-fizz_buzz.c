#include <stdio.h>
/**
 *main - Print numbers with words
 *Return: 0(success)
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
		printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
		printf("buzz");
		}
		else if (i % 3 == 0)
		{
		printf("Fizz");
		}
		else
		{
		printf("%d", i);
		}
		if (i != 100)
		{
		printf(" ");
		}
	}
	printf("\n");
return (0);
}
