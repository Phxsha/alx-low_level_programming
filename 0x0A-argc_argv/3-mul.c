#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: array size
 * @argv: number of elements
 * Return: 0 on succes and 1 on failure
 */
int main(int argc, char **argv)
{
	int array_length = argc - 1;

	if (array_length != 2)
	{
		puts("Error");

		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
