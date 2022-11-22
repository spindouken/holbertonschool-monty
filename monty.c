#include "monty.h"

global_t global = {NULL, NULL};

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument variable
 * Return:
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
		monty_read(argv[1]);
	else
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	return (0);
}
