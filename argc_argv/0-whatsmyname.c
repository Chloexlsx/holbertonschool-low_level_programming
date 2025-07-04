#include <stdio.h>

/**
 * main - prints the name of itself
 * @argc: the number of arguments
 * @argv: the array for the arguments
 *
 * Return: 0 if sucess.
 */
int main(int argc, char *argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
