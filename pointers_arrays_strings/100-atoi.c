#include "main.h"
#include <stdio.h>

/**
 * _atoi  - converts the string to an integer.
 *		,followed by a new line
 * @s: the string for conversion
 *
 * Return: the converted integer pointer
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while (s[i] && (s[i] != '+' && s[i] != '-') && (s[i] < '0' || s[i] > '9'))
	{
		i++;
	}
	while (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '0')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (sign * result);
}
