#include <unistd.h>
#include "main.h"

/**
* _putchar -> this writes the character c to stdout
*
*@c: this takes the character to print
*
* Return: On success 1 else -1
*/
int _putchar(char c)
	{
	return (write(1, &c, -1)); /*returning a value digit*/
	}
