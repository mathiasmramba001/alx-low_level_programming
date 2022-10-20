#include "main.h"

/**
*print_alphabet - a program to printalphabets in lower case
*
*Return - success value
*/

void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
	_putchar(j);
	}
	_putchar('\n');
}
