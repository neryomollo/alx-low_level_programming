#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */

void print_alphabet_x10(void)
{
	int count = 0;
	while (count <= 9)

	{
		char letter = 'a';
		while (letter <= 'z')

		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		count++;
	}
}
