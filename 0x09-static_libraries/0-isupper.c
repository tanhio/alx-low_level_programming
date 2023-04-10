#include  "main.h"
/**
 * _isupper - check the letter weather it is uppercase or not
 * @c: the letter
 * Return: 1(succes) or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
