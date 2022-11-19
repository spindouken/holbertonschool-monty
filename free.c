#include "monty.h"

/**
 * monty_free - function that frees top of stack_t stack systemically
 * in order to free stack
 * @stack: top of stack
 * Return: void
 */

void monty_free(stack_t *stack)
{
	stack_t *temp;

	if (stack == NULL)
		return;
	while (stack != NULL)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}
	free(stack);
}
