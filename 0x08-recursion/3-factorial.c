#include "main.h"
/**
 * factorial - Entry point
 * @n: assigned int
 * Return: fatorian of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
