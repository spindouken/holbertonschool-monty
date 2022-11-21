#include "monty.h"

/**
 * free_monty - function that frees top of stack_t stack systemically
 * in order to free stack
 * @stack: top of stack
 * Return: void
 */

void free_monty(stack_t *stack)
{
	stack_t *python;

	if (stack == NULL)
		return;
	while (stack != NULL)
	{
		python = stack;
		stack = stack->next;
		free(python);
	}
	free(stack);
}
