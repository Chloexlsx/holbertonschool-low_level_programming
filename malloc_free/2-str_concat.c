#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: the 1st string to concatenate
 * @s2: the second string to concate
 *
 * Return: a pointer to the new array or NULL
 */
char *_strdup(char *str)
{
	/*create a pointer to the new array*/
	char *new_cnc;
	int i = 0;
	int j = 0;
	int cnt1 = 0;
	int cnt2 = 0;
	int cnc_len = 0; 

	/*return NULL if the str input is NULL*/
	if (s1 == 0)

	/*count how many item is in the array*/
	while (s1[cnt1] != '\0')
		cnt1++;
	
	while (s2[cnt2] != '\0')
		cnt2++;
	
	cnc_len = cnt1 + cnt2;
	/*allocate memory space to the array include '\0'*/
	new_cnc = malloc((cnc_len + 1) * sizeof(char));

	/*check if the system allocate spaces as request*/
	if (new_cnc == NULL)
		return (NULL);

	/*concatenate the array*/
	while (i + j <= cnc_len)
	{
		if (s1[i] != '\0')
		{
			new_cnc[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
			new_cnc[i + j] = s2[j];
			j++;
	}
	return (new_cnc);
}
