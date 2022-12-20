#include "main.h"
/**
 * _abs - computes absolute value of an integer
 * @i: assigned int to print
 * Return: Always 0
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (i * (-1));
	}
	else if (i == 0)
	{
		return (0);
	}
	else
	{
		return (i);
	}
}
