#include <stdio.h>
/**
 *main - Print all the letters except q and e except with lowercase
 *Return: always 0(success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		putchar(i);
	}
	putchar('\n');
return (0);
}
