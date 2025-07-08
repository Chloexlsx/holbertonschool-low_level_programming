#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy an array of chars,
 * @str: the array to copy
 *
 *
 * Return: a pointer to the dup array or NULL
 */
char *_strdup(char *str)
{
	/*create a pointer to the new array*/
	char *a;
	unsigned int i = 0;
	unsigned int cnt = 0;

	/*return NULL if the str input is NULL*/
	if (str == 0)
		return (NULL);
	/*count how many item is in the array*/
	while (str[cnt] != '\0')
		cnt++;
	/*allocate memory space to the array include '\0'*/
	a = malloc((cnt + 1) * sizeof(char));

	/*check if the system allocate spaces as request*/
	if (a == NULL)
		return (NULL);

	/*initialise the array*/
	while (i <= cnt)
	{
		a[i] = str[i];
		i++;
	}
	return (a);
}
