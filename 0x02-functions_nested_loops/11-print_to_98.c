#include "main.h"
#include <std.io>
/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: starts n to 98
 * Return: Always 0
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}
