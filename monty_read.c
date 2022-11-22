#include "monty.h"

/**
 * monty_read - Read file
 * @argv: arguments
 * Return: void
 */

void monty_read(char *argv)
{
	int count = 0, result = 0;
	size_t bufsize = 0;
	char *arguments = NULL, *item = NULL;
	stack_t *stack = NULL;

	global.fd = fopen(argv, "r");
	if (global.fd)
	{
		while (getline(&global.line, &bufsize, global.fd) != -1)
		{
			count++;
			arguments = strtok(global.line, " \n\t\r");
			if (arguments == NULL)
			{
				free(arguments);
				continue;
			}
			else if (*arguments == '#')
				continue;
			item = strtok(NULL, " \n\t\r");
			result = monty_call(&stack, arguments, item, count);
			if (result == 1)
				push_error(global.fd, global.line, stack, count);
			else if (result == 2)
				ins_error(global.fd, global.line, stack, arguments, count);
		}
		free(global.line);
		free_monty(stack);
		fclose(global.fd);
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv);
		exit(EXIT_FAILURE);
	}
}
