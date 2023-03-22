#include "main.h"
/**
 *_isalpha - Checks for alphabet character
 *@c: The checked character
 *Return: 1(lowercase or uppercase) or 1(otherwise)
 */
int _isalpha(int c)
{
		if ((c >= 97 && c <= 122) || (c >= 65 && c <= 97))
		{
		return (1);
		}
		return (0);
}
