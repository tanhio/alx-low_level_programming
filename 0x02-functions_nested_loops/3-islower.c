#include "main.h"
/**
 *_islower - Checks for lowercase character
 *@c: The checked character
 *Return: 1(lowercase) or 0(otherwise)
 */
int _islower(int c)
{
		if (c >= 97 && c <= 122)
		{
		return (1);
		}
		return (0);
}
