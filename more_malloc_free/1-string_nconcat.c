#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - concatenates two strings using malloc
 *@s1: the first string to allocate
 *@s2: the second string
 *@n: bytes
 *
 *Return: a pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i;
	unsigned int j;
	unsigned int len = 0;
	unsigned int len2 = 0;
	unsigned int copy_len = 0;

	/*if input is NULL, treat it as empty str*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*count the len of s1*/
	while (s1[len] != '\0')
		len++;
	while (s2[len2] != '\0')
		len2++;
	/*allocates memory using malloc*/
	new_str = malloc((len + n + 1) * sizeof(char));
	/*if malloc fails, terminate with 98*/
	if (new_str == NULL)
		return (NULL);
	/*concatenate s1 & s2, if n >= len2*/
	for (i = 0; i < len; i++)
		new_str[i] = s1[i];
	if (n >= len2)
		copy_len = len2;
	copy_len = n;

	for (j = 0; j < n; j++)
		new_str[i + j] = s2[j];
	new_str[i + j + 1] = '\0';

	return (new_str);
}
