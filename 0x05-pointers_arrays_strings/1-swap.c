#include "main.h"
/**
 * swap_int - swaps value of two integers
 * @a: assigned int 1
 * @b: assigned int 2
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
