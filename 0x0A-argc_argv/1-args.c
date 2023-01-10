#include <stdio.h>
/**
 * main - prints number of arguments passed int it
 * @argc: array size
 * @argv: number of elements in it
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	(void)(argv);
	printf("%d\n", argc - 1);

	return (0);
}
