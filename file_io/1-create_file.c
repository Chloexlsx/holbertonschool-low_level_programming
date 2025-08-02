#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include <sys/types.h>

/**
 * create_file - create text file
 * @filename: the filename
 * @text_content: the bytes to read and write
 *
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	/*open() will return a file descriptor for RW function to look for the file*/
	int fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	/*ask for the bytes according to the input argument from malloc*/
	ssize_t bytesWritten;
	int str_len = 0;

	if (filename == NULL)
		return (-1);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	/*writes the string given to the file*/
	/*count string len*/
	while (text_content[str_len])
		str_len++;
	bytesWritten = write(fd, text_content, str_len);
	if (bytesWritten == -1)
		return (-1);
	close(fd);
	return (1);
}
