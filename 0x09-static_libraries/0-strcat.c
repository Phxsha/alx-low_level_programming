#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: A pointer to the string to be concatenated upon.
 * @src: source string
 * Return: pointer @dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
