#include "main.h"

/**
 * print_line - function that prints lines
 * @n: number of times
 *
 * Author: Nery Omollo
 * Return: void
 */


void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
