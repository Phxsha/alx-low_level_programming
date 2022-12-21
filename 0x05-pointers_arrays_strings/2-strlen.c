#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: string pointer
 * Return: Always 0
 */
int _strlen(char *s)
{
	int length;

	for (; *s != '\0'; s++)
	{
		length += 1;
	}
	return (length);
}
