#include "holberton.h"

/**
 * print_alphabet - print alphabet function
 */

void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		++x;
	}
	_putchar('\n');

}
/**
 * print_alphabet_x10 - printx10
 *
 */

void print_alphabet_x10(void)
{
	int z = 0;

	while (z <= 9)
	{
		print_alphabet();
		++z;
	}
}
