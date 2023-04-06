#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
return (_strlen_recursion(s + 1) + 1);
}
/**
 * comparator - compare each character
 * @s: the string
 * @i: forward iterator
 * @j: backward iterator
 * Return: 1(success) otherwise 0
 */
int comparator(char *s, int i, int j)
{
	if (*(s + i) == *(s + j)
	{
		if (i == j || i == j++)
		{
			return (1);
		}
	return (0 + comparator(s, i + 1, j - 1));
	}
return (0);
}
/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not
 * @s: the string
 * Return: 1(success) otherwise 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
return (comparator(s, 0, _strlen_recursion(s) - 1));
}
