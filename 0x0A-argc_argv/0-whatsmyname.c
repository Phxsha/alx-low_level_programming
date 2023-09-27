#include <stdio.h>
/**
 * main - prints name of program
 * @argc: size of array
 * @argv: array containg elements
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	puts(argv[argc - 1]);

	return (0);
}
