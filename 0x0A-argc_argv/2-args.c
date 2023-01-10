#include <stdio.h>
/**
 * main - prints all arguments received
 * @argc: array size
 * @argv: number of elements
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		puts(argv[i]);
		i++;
	}
	return (0);
}
