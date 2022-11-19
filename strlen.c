#include "main.h"
/**
 * _strlen - return length of a string
 *
 * @s: variable
 *
 * Return: void
 */
int _strlen(char *s)
{
	int x = 0;

	while (*(s + x))
		x++;
	return (x);
}
