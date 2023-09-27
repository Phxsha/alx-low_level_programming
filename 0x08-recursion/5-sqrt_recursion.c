#include "main.h"
/**
 * number - finds squareroot of natural squareroot numbers
 * @n: natural number from 1
 * @root: squareroot number to be found
 * Return: squareroot of answer
 */
int number(int n, int root)
{
	if (n * n == root)
		return (n);
	if (n == root)
		return (-1);
	return (1 * number(n + 1, root));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number where natural square root should be found
 * Return: natural square root n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (number(1, n));
}
