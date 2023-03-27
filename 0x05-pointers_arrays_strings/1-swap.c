#include "main.h"

/**
 *swap_int - Swaps the values of two integers
 *@a: One of the integers
 *@b: The other integer
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;

}
