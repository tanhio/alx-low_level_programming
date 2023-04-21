#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list fp;
	unsigned int i;
	char *c;

	va_start(fp, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(fp, char *);
		if (c == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", c);

			if (separator != NULL && i != (n - 1))
			{
				printf("%s", separator);
			}
		}	
	}
	printf("\n");

	va_end(fp);
}
