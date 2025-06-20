#include "main.h"
/**
 * jack_bauer - prints prints every minute starting from 00:00 to 23:59.
 *
 * Return: 0 always (success)
 */

void jack_bauer(void)
{
int i, j, k, l;
for (j = 0; j < 3; j++)
{
	if (j < 2)
	{
		for (i = 0; i < 10; i++)
		{
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l < 10; l++)
				{
					_putchar(j + '0');
					_putchar(i + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
			}
		}
	} else
		for (i = 0; i < 4; i++)
		{
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l < 10; l++)
				{
					_putchar(j + '0');
					_putchar(i + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
			}
		}
	}
}
