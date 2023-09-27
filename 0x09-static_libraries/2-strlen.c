#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: string pointer
 * Return: Always 0
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;

	return (count);
}
