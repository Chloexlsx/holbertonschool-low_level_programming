#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_fail - check if read fails
 * @fail_flag: true or false
 * @fname: the pointer to the filename
 *
 * Return: void
 */
void read_fail(int fail_flag, char *fname)
{
	if (fail_flag)
	{
		dprintf(2, "Error: Can\'t read from file %s\n", fname);
		exit(98);
	}
}

/**
 * write_fail - check if read fails
 * @fail_flag: true or false
 * @fname: the pointer to the filename
 *
 * Return: void
 */
void write_fail(int fail_flag, char *fname)
{
	if (fail_flag)
	{
		dprintf(2, "Error: Can\'t write to %s\n", fname);
		exit(99);
	}
}

/**
 * main - cp file_from to file_to
 * @argc: the number of arguments
 * @argv: the array of input
 *
 * Return: an integer
 */
int main(int argc, char *argv[])
{
	/*argv[0] = cp, argv[1] = file_from, argv[2] = file_to*/
	char *file_from, *file_to;
	char buffer[1024];
	ssize_t bytesRead, bytesWritten;
	int fd_from = -1, fd_to = -1, i;
	int *fds[2];

	fds[0] = &fd_from, fds[1] = &fd_to;
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1], file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);
	fd_to = open(file_to, O_WRONLY | O_TRUNC | O_CREAT,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	/* open file check */
	read_fail(fd_from == -1, file_from);
	write_fail(fd_to == -1, file_to);
	/*start - read to buffer, then from buffer write to file_to*/
	bytesRead = read(fd_from, buffer, sizeof(buffer));
	read_fail(bytesRead == -1, file_from);
	while (bytesRead > 0)
	{
		bytesWritten = write(fd_to, buffer, bytesRead);
		write_fail(bytesWritten == -1, file_to);
		bytesRead = read(fd_from, buffer, sizeof(buffer));
	}

	for (i = 0; i < 2; ++i)
		if (close(*(fds[i])) == -1)
		{
			dprintf(2, "Error: Can\'t close fd %d\n", *(fds[i]));
			exit(100);
		}
	return (0);
}
