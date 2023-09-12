#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer for which to compute the absolute value.
 *
 * Return: The absolute value of @n.
 *
 * Description: This function computes the absolute value of the input integer.
 * If @n is negative, it returns the negation of @n to make it positive.
 * If @n is already non-negative, it returns @n as is.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
