#include "lists.h"

/**
 * monty_push - add new node to top of
 * stack_t stack (doubly linked list)
 * @stack: stack
 * @line_number: line number
 * Return: void
 */

void monty_push(stack_t **stack, unsigned int line_number)
{
	stack_t *node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	node->n = ;
	node->prev = NULL;

	if (*stack == NULL)
	{
		node->next = NULL;
		*stack = node;
	}
	else
	{
		node->next = *stack;
		(*stack)->prev = node;
		*stack = node;
	}
}
