#include <stdio.h>
#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0(success) otherwise 1
 */
int main(int argc, char *argv[])
{
	int i, j, k;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
		i = _atoi(argv[1]);
		j = _atoi(argv[2]);
		k = i * j;

		printf("%d\n", k);
return (0);
}
