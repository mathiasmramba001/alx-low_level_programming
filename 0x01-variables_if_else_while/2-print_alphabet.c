#include <stdio.h>

/**
 * main - Prints the alphabets letters in lowercase.
 *
 * Return: Always 0(successful).
 **/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);
	putchar('\n');
	return (0);
}
