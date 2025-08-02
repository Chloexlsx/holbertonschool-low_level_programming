#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include <sys/types.h>

/**
 * read_textfile - read text file then write the content to POXIX
 * @filename: the filename
 * @letters: the bytes to read and write
 *
 * Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	/*open() will return a file descriptor for RW function to look for the file*/
	int fd = open(filename, O_RDONLY);
	/*ask for the bytes according to the input argument from malloc*/
	char *buffer = malloc(letters);
	ssize_t bytesRead, bytesWritten;

	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	if (fd == -1)
		return (0);
	/*read bytes given from the file given into buffer, using file descriptor*/
	/*read() returns how many bytes read to the variable bytesRead*/
	bytesRead = read(fd, buffer, letters);

	if (bytesRead == -1)
		return (0);
	close(fd);
	/*prints char in buffer based on how many bytes are read successfully*/
	bytesWritten = write(isatty(STDOUT_FILENO) ? 1 : 2, buffer, bytesRead);
	//bytesWritten = write(2, buffer, bytesRead);
	if (bytesWritten == -1)
		return (0);
	return (bytesWritten);
}
