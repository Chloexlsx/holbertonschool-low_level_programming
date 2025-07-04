#include <stdio.h>

/**
 * main - prints the name of itself
 * @argc: the number of arguments
 * @argv: the array for the arguments
 *
 * Return: 0 if sucess.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
