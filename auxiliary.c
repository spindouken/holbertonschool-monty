#include "monty.h"

/**
 * int_check - Checks for int 0 through 9
 * Return: 0 or 1
 * @c:
 */

int int_check(char *c)
{
	char *aux = c;

	if (c == NULL)
		return (0);
	if (*aux == '-')
		aux++;

	for (; *aux != '\0'; aux++)
	{
		if ((*aux < '0' || *aux > '9'))
		{
			return (0);
		}
	}
	return (1);
}
