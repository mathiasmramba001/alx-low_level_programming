#include "main.h"

/**
* _isalpha -checks for letters alphabets
*@c: character are also to be checked
*Return: returns 0 or 1 depending on condition
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
