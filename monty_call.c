#include "monty.h"

/**
 * monty_call - function pointer that takes arg of f in struct
 * @stack:
 * @arg:
 * @item: token
 * @count: line
 * Return: 0 on success
*/

int monty_call(stack_t **stack, char *arg, char *item, int count)
{
	int x = 0;

	instruction_t call[] = {
		{"push", monty_push},
		{"pall", monty_pall},
		{NULL, NULL}
	};

	while (call[x].opcode)
	{
		if (!strcmp(arg, call[x].opcode))
		{
			if (!strcmp(arg, "push"))
			{
				if (int_check(item) == 1)
						value = atoi(item);
				else
					return (1);
			}
			call[x].f(stack, (unsigned int)count);
			break;
		}
		x++;
	}
	if (!call[x].opcode)
		return (2);

	return (0);
}
