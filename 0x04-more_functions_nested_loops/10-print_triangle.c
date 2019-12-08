#include "holberton.h"
/**
  *print_triangle - prints triangles
  *@size: size of the triangle
  */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j >= 1; j--)
			_putchar(' ');
		for (k = 0; k < i; k++)
			_putchar('#');
		_putchar('\n');
	}
}
