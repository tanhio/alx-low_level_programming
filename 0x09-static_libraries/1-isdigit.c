#include "main.h"
/**
 * _isdigit - check weather a data is digit or not
 * @c: the data
 * Return: 1(success) or 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
