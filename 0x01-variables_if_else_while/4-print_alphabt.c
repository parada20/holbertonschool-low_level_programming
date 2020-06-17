#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main function
 * Return: 0
 **/
int main(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		if (s != 'q' && s != 'e')
			putchar(s);
	}
	putchar('\n');
	return (0);
}
