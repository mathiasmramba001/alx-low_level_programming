#include "main.h"

/**
* print_square - this function prints a square of size
*
* @size: size takes value of the square
*
* Return: void
*/


void print_square(int size)
{
	int i, j; /*declaration of intergers*/

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
