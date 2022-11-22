#include "monty.h"

/**
 * push_error - push error
 * @fd: file desciptor
 * @line: buffer
 * @stack: stack
 * @count: line command
 */
void push_error(FILE *fd, char *line, stack_t *stack, int count)
{
	dprintf(STDERR_FILENO, "L%u: usage: push integer\n", count);
	fclose(fd);
	free(line);
	free_monty(stack);
	exit(EXIT_FAILURE);
}

/**
 * ins_error - error handler
 * @fd: file descriptor
 * @line: buffer
 * @stack: stack
 * @count: is a line command
 * @item: number
 */
void ins_error(FILE *fd, char *line, stack_t *stack, char *count, int item)
{
	dprintf(STDERR_FILENO, "L%u: unknown instruction %s\n", item, count);
	fclose(fd);
	free(line);
	free_monty(stack);
	exit(EXIT_FAILURE);
}


