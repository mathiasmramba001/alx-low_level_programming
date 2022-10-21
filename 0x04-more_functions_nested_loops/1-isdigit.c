#include "main.h"

/**
* _isdigit - checks for characters that are digits
*
* @c: character*
* Return: 0 or 1
*/
int _isdigit(int c) /*calling of the fuctions*/
{
	if (c >= '0' && c <= '9') /*checks for digits from 0 to 9*/
		return (1); /*returning a 1 if condition true*/
	else
		return (0); /*returning a zero if condition is false*/
}
