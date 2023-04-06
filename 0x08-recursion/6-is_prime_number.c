#include "main.h"
#include <stdio.h>
int is_prime(int n, int i);
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: the integer
 * Return: 1(success) otherwise 0
 */
int is_prime_number(int n)
{
	return (is_prime(n, 1));
}
/**
 * is_prime - check the number weather it is prime or not
 * @n: the number
 * @i: number of iteration
 * Return: 1(success) otherwise 0
 */
int is_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
return (is_prime(n, i + 1));
}
