#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: A pointer to a constant binary string.
 *
 * Return: The converted number, or 0 if invalid input.
 **/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int n = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		n <<= 1;
		if (b[i] == '1')
			n += 1;
		else
		{
			if (b[i] != '0' && b[i] != '1')
				return (0);
		}
	}
	return (n);
}
