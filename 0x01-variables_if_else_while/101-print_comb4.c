#include <stdio.h>
/**
 *main - Prints all possible different combinations of two digits
 *Return: Always 0(success)
 */
int main(void)
{
	int i, j, k;

	for (i = '0'; i < '9'; i++)
	{
	for (j = i + 1; j <= '9'; j++)
	{
	for (k = j+1; k <= '9'; k++)
	{
		if ((i != j) != k)
		{
		putchar(i);
		putchar(j);
		putchar(k);
		if (k == '8' && j == '7')
		continue;
		putchar(',');
		putchar(' ');
		}
	}
	}
	}
	putchar('\n');
return (0);
}
