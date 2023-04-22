#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - returns the sum of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the deduct of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the deduct
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns the multiple of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the multiple
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the quotient of two numbers
 * @a: the dividend
 * @b: the divisor
 * Return: the quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the remainder of two numbers
 * @a: the dividend
 * @b: the divisor
 * Return: the remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
