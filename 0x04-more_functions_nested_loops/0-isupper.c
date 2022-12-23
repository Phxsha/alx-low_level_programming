#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: assigned int
 * Return: 1 if TRUE and 0 if FALSE
 */
int _isupper(int c)
{
	int start = 65, end = 98;

	if (c >= start && c <= end)
		return (1);

	return (0);
}
