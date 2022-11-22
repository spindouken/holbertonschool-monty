#include "monty.h"

/**
 * free_monty - function that frees top of stack_t stack systemically
 * in order to free stack
 * @stack: top of stack
 * Return: void
 */

void free_monty(stack_t *stack)
{
	stack_t *python = NULL;

	python = stack;

	while (python != NULL)
	{
		free_monty(python->next);
		free(python);
	}
}

/**
 * freestack - Frees mallocs and close files
 * @stack: Stack
 */

void freestack(stack_t **stack)
{
	stack_t *current = *stack;

	for (; current; current = *stack)
	{
		*stack = (*stack)->next;
		free(current);
	}
	fclose(global.fd);
	free(global.line);
}
