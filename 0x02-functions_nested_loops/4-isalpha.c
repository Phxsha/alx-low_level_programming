#include "main.h"
/**
 * _isalpha - Checks for alphabet
 * Return: Alway 1 if TRUE and 0 if FALSE
 * @c: assigned int
 */
int _isalpha(int c)
{
	for ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
