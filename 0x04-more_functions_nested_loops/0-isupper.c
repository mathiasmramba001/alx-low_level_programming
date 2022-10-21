#include "main.h"

/**
 * _isupper - this fuction that checks for uppercase character.
 * @c: variable type int
 * Return: 1 for uppercase and  0 otherwise
 */
int _isupper(int c)/*fucntion call*/
{
	if (c >=  'a' && c <= 'z')/*comparison*/
	{
		return (1);/*returning a value 0f 1 if uppercase*/
	}
	else
	{
		return (0);
	}
}
