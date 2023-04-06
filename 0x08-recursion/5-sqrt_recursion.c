#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}
/**
 * sqrt - calculate the square root
 * @n: the number
 * @i: number of iteration
 * Return: the square root
 */
int sqrt(int n, int i)
{
	int j = i * i;

	if (j > n)
	{
		return (-1);
	}
	if (j == n)
	{
		return (i);
	}
return (sqrt(n, i + 1));
}

