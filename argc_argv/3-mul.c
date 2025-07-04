#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of itself
 * @argc: the number of arguments
 * @argv: the array for the arguments
 *
 * Return: 0 if sucess.
 */
int main(int argc, char *argv[])
{
	int a, b, r = 0;

	/*check if there are exact three arguments*/
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	r = a * b;
	printf("%d\n", r);

	return (0);
}
