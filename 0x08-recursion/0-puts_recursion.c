#include "main.h"

/**
  *_puts_recursion -prints a string folled by a new line
  *
  *@s: this takes a pointer to the string
  *
  *returns: always void
  */
void _puts_recursion(char *s)
{
	if (s[0] =='\0')
	{
		_putchar('\n');
	return;
	_putchar(s[0]);
	_puts_recursion(s + 1);
	}

