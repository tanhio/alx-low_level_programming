#include "main.h"
/**
 *print_last_digit - Prints the last digit of a number
 *@i: The number
 *Return: The value of the last digit
 */
int print_last_digit(int i)
{
	int j = i % 10;

	if (i < 0)
	{
	j = j * -1;
	}
	 _putchar('0' + j);
	return (j);
}
