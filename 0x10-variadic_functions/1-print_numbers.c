#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list fp;
	unsigned int i;

	va_start(fp, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(fp, int));

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	 printf("\n");

	 va_end(fp);
}
