#include "main.h"
/**
 * _puts - prints string and new line to stdout
 * @str: string to be printed
 * Return: Always 0
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
