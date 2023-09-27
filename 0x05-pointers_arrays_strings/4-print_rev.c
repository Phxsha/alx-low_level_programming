#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: assigned pointer to print
 * Return: Always 0
 */
void print_rev(char *s)
{
	int count = 0;

	while (*s)
	{
		s++;
		count++;
	}
	while (count)
	{
		s--;
		_putchar(*s);
		count--;
	}
	_putchar('\n');
}
