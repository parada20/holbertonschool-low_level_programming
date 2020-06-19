#include "holberton.h"

/**
 * print_sign - print sign of a number
 * @n: Description of parameter n
 * Return: return 1, return 0 and return -1
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');

		return (-1);

	}

}
