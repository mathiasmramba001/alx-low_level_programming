#include "main.h"
/**
* print_last_digit - print the lst digit of a number
*@n: arguments are passed
*return: the last known digit
*/
int print_last_digit(int n)
{
	int q;

	if (n < 0)
	 n = -n;
	 q = n % 10;
	putchar (q + '0');
	return (q);
}
