#include "main.h"

/**
* main - This is A mathias Mramba program that prints "_putchar"
* Return: 0
*/
int main(void)
{
	int i;
	char ch[] = "_putchar";
	
	for (i = 0; ch[i] != '\0'; i++)
	{
		_putchar(ch[i]);
	}

	_putchar('\n');
	return (0);
}
