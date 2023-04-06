#include "main.h"
#include <stdio.h>
int _sqrt(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - calculate the square root
 * @n: the number
 * @i: number of iteration
 * Return: the square root
 */
int _sqrt(int n, int i)
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
return (_sqrt(n, i + 1));
}

