#include "main.h"

/**
* print_sign - prints the signs depending on condition
*@w: this aslo passes an argument
*Returns: returns positive,negative or zero values
*/
int print_sign(int w)
{
	if (w > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (w == 0)
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
