#include "monty.h"

/**
 * monty_pint - prints value at the top of the stack
 * @stack: stack
 * @line_number: line number
 */

void monty_pint(stack_t **stack, unsigned int line_number)
{
	if (!*stack || !stack)
	{
		dprintf(STDERR_FILENO, "L%d: can't pint, stack empty\n", line_number);
		freestack(stack);
		exit(EXIT_FAILURE);
	}
	else
		dprintf(STDOUT_FILENO, "%d\n", (*stack)->n);
}

/**
 * monty_pop - removes the top element of the stack
 * @stack: stack
 * @line_number: line number
 */

void monty_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *current = NULL;

	if (*stack == NULL || stack == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't pop an empty stack\n", line_number);
		freestack(stack);
		exit(EXIT_FAILURE);
	}

	current = *stack;

	*stack = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
}

/**
 * monty_swap - swaps the top two elements of the stack
 * @stack: stack
 * @line_number: line number
 */

void monty_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	int temp = 0;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		freestack(stack);
		exit(EXIT_FAILURE);
	}
	temp = current->n;
	current->n = current->next->n;
	current->next->n = temp;
}

/**
 * monty_add - function that adds the top two elements of the stack
 * @stack: stack
 * @line_number: line number
 */

void monty_add(stack_t **stack, unsigned int line_number)
{
	stack_t *current = NULL;
	int sum = 0;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		freestack(stack);
		exit(EXIT_FAILURE);
	}
	current = *stack;
	sum = current->n + current->next->n;
	current->next->n = sum;
	monty_pop(stack, line_number);
}

/**
 * monty_nop - doesn't do anything (lol?)
 * @stack: stack
 * @line_number: line number
 */

void monty_nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
