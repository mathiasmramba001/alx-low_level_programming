#include "main.h"

/**
* print_triangle -> this fucntion prints a triangle .
*
* @size: by taking values of the size of triangle.
*
* Return: void
*/

void print_triangle(int size)/*the function of type interger*/
{
	int i, j;/*intergers declared*/

	if (size <= 0)/*comapring to ensure that intergers are not zero*/
		_putchar('\n');
	for (i = 1; i <= size; i++)/*for loop with i with value 1*/
	{
		for (j = 1; j <= size; j++)/*nested for loop*/
		{
			if (j <= (size - i))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
