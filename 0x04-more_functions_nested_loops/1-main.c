#include "main.h"
#include <stdio.h>

/**
 * main
 *
 * Return: Always 0.
 */
int main(void) /*calling of a fuction of type interger*/
{
	char c; /*declaring a character variable*/

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
