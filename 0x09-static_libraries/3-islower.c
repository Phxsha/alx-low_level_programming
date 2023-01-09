#include "main.h"
/**
 * _islower - Entry point
 * @c: assigned int
 * Return: returns 1 if TRUE returns 0 if FALSE
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
