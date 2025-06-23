#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: triangle size
 *
 * Return: a triangle.
 */
void print_triangle(int size)
{
	int v = 0;
	int s;
	int h;
	int spacepos = 0;
	int hexpos = 0;

	if (size > 0)
	{
		while (v < size)
		{
			s = size - (v + 1);
			h = size - s;

			while (spacepos < s)
			{
				_putchar(' ');
				spacepos = spacepos + 1;
			}
			while (hexpos < h)
			{
				_putchar('#');
				hexpos = hexpos + 1;
			}

			v = v + 1;
			spacepos = 0;
			hexpos = 0;

			if (v < size)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
