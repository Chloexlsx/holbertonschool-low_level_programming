main(int argv, char *argc)
{
	char *file_from, *file_to;
	char *buffer;
	char *NAME_OF_THE_FILE;
	ssize_t bytesRead, bytesWritten;
	int fd_from = open(file_from, O_RDWR);
	int fd_to = open(file_to, O_WRONLY | O_TRUNC | O_CREAT; S_IRUSR | S_IWRITE |S_IRGRP | S_IWGRP | S_IROTH);

	if (argv != 3)
		exit(97);
		dprintf(2, "Usage: cp file_from file_to\n");
	if (argc[1] == NAME_OF_THE_FILE && fd_from == -1)
		exit(98);
		dprintf(2, "Error: Can't read from file %s\n", NAME_OF_THE_FILE);
	if (argc[2] == NAME_OF_THE_FILE && fd_to == -1)
		dprintf(2, "Error: Can't write to  %s\n", NAME_OF_THE_FILE);
	if (close(fd) == -1)
		exit(100);
		dprintf(2, "ERROR: Can't close fd %d", fd);
	/*start - read to buffer, then from buffer write to file_to*/
	buffer = malloc(1024)
	bytesRead = read(fd_from, buffer, sizeof(buffer));
	if (bytesRead == -1)
		return(0);
	bytesWritten = write(fd_to, buffer, bytesRead);
	if (bytesWritten == -1)
		return (0);
}
