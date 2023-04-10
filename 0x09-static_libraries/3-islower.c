#include  "main.h"
/**
 * _islower - check the letter weather it is lowercase or not
 * @c: the letter
 * Return: 1(succes) or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
