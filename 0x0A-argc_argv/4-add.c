#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - the function begins
 * @str: array str
 * Return: 0
 */
int check_num(char *str)
{
	unsigned int count;

	for (count = 0; count < strlen(str); count++)
	{
		if (isdigit(str[count]))
		{
			return (0);
		}
	}
return (1);
}
/**
 * main - the function begins
 * @argc: count arguments
 * @argv: arguments
 * Return: 0(success)
 */
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	for (count = 0; count < argc; count++)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count ++;
	}
	printf("%d\n", sum);
return (0);
}
