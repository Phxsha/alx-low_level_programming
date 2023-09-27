#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: assigned int
 * Return: if TRUE 1 if FALSE 0
 */
int _isdigit(int c)
{
	int start = 48, end = 57;

	if (c >= start && c <= end)
		return (1);
	return (0);
}
