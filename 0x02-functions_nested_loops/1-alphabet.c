#include "main.h"
/**
*print_alphabet - Prints alphabet in lowercase
*Return: Always 0
*/
void print_alphabet(void)
{
	char lc = 'a';

	while (lc <= 'z')
	{
		_putchar(lc);
		lc++;

	}
	_putchar('\n');
}
