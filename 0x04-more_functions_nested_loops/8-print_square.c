#include "main.h"

/**
 * print_square - prints a square of size defined by @size
 * @size: size of the square
 *
 * Author: Nery Omollo
 * Return: void
 */


void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size); j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
