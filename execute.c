#include "monty.h"

/**
 * execute - doubly linked list representation of a stack (or queue)
 * @argc: Argument count
 * @argv: Array of arguments
 *
 * Return: 0
 */

int execute(char **tokens, int line_number, stack_t **stack)
{
	char *token_1 = tokens[0];
	char *token_2 = tokens[1];

	if (strcmp(*tokens, "push") == 0)
	{
		pass; // To be completed
	}

	free_everything(tokens);
	return (0);
}
