#include "monty.h"

/**
 * main - monty code
 * @argc: argument count
 * @argv: argument variable
 * Return: 0 on success
*/

int main(int argc, char **argv)
{
	FILE *filetext;
	char *line = NULL, *token = NULL;
	size_t length = 0;
	unsigned int linecount = 1;
	stack_t *stack = NULL;

	if (argc != 2)
		printf("");

	filetext = fopen(argv[1], "r");
	if (filetext == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", name);
		exit(EXIT_FAILURE);
	}
	while (getline(&line, &length, filetext)) != -1)
	{
		token = strtok(line, " \n\t");
		if (*token == '\0')
			continue;
		if (strcmp(token, "push") == 0)
		{
			token = strtok(NULL, " \n\t");
			monty_push(&stack, linecount);
		}
		if (strcmp(token, "pall") == 0)
		{
			monty_pall(&stack, linecount);
		}
		linecount++;
	}

	fclose(filetext);
	if (line != NULL)
		free_monty(line);
	free_monty(stack);

	return (0);
}
