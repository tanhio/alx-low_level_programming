#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of parameters
 * @...: number of being indefinite
 * Return: the sum of passed parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list fp;
	unsigned int i, j, k = 0;

	va_start(fp, n);

	if (n == 0)
	{
		return (0);
	}
	else
	{
	for (i = 0; i < n; i++)
	{
		j = va_arg(fp, int);
		k += j;
	}
		va_end(fp);
	return (k);
	}
}
