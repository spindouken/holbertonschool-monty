#include "monty.h"

/**
 * user_error - return error message upon fail
 * Return: (EXIT_FAILURE)
 */

int user_error(void)
{
	write(STDERR_FILENO, "USAGE: monty file\n", 18);
	return (EXIT_FAILURE);
}

/**
 * fopen_error - function that prints the fopen error message + filename
 * @filename: name of file
 * Return: (EXIT_FAILURE)
 */

int fopen_error(char *filename)
{

}


/**
 * malloc_error - function that returns error code
 * and malloc error information upon malloc failure
 * Return: (EXIT_FAILURE)
 */
int malloc_error(void)
{
	write(STDERR_FILENO, "Error: malloc failed\n", 21);
	return (EXIT_FAILURE);
}
