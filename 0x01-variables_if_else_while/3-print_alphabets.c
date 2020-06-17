#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main function
 * Return: 0
 **/
int main(void)
{
	char s, p;

	for (s = 'a'; s <= 'z'; s++)
		putchar(s);
	for (p = 'A'; p <= 'Z'; p++)
		putchar(p);
	putchar('\n');
	return (0);
}
