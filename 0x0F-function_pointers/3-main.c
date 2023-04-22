#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - prints functions result
 * @argc: the number of arguments
 * @argv: array of pointers
 * Return: 0
 */
int main(int __attribute__((__unused__))argc, char *argv[])
{
	int i, j;
	char *c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[i]);
	c = argv[2];
	j = atoi(argv[3]);

	if (get_op_func(c) == NULL || c[i] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*c == '/' && j == 0) || (*c == '%' && j == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(i, j));

	return (0);
}
