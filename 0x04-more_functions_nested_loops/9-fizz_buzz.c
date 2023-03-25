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
		printf("FizzBuzz ");
		continue;
		}
		else if (i % 5 == 0)
		{
		printf("buzz ");
		continue;
		}
		else if (i % 3 == 0)
		{
		printf("Fizz ");
		continue;
		}
		else if(i == 100)
		{
		printf("%d\n", i);
		break;
		}
		else
		{
		 printf("%d ", i);
                continue;
		}
	}
return (0);
}
