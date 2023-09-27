#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @d: assigned int
 * Return: Always 0
 */
int print_last_digit(int d)
{
	int last_digit;

	if (d < 0)
	{
		last_digit = (-1 * (d % 10));

		_putchar(last_digit + '0');

		return (last_digit);
	}
	else
	{
		last_digit = (d % 10);

		_putchar(last_digit + '0');

		return (last_digit);
	}
}
