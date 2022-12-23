#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: assigned int
 * Return: 1 if TRUE and 0 if FALSE
 */
int _isupper(int c)
{
	for (c = 'A'; c <= 'Z'; c++)
	{
		return (1);
	}
	for (c = 'a'; c <= 'z'; c++)
	{
		return (0);
	}
}
