#include "main.h"
/**
 * *_strcpy - copies string
 * @dest: assigned character
 * @src: assigned charavter to print
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0, i;

	while (*src)
	{
		src++;
		count++;
	}

	for (i = 0; i < count; i++)
		src--;

	for (i = 0; i < count; i++)
	{
		dest[i] = *src;
		src++;
	}

	dest[i] = *src;

	return (dest);
}
