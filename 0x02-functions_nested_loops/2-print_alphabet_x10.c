#include "main.h"

/**
* print_alphabet_x10(void)- a program to print alphabets ten times
*
* return success value
*/

void print_alphabet_x10 (void)
{
	int w;
	int y;

	for (w = 0; w < 10; w++)
	{
	for (y = 'a'; y <= 'z'; y++)
		{
		_putchar(y);
		}
		_putchar('\n');
	}
}
