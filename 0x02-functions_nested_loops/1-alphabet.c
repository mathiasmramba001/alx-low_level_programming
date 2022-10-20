#include "main.h"

/**
*print alphabets- a program to printalphabets in lower case
*followed by a new line
*/

void print_alphabet(void)
{
	int j;

	for (j= 'a'; j <= 'z'; j++)
	{
	_putchar(j);
	}
	_putchar('\n');
}
