#include "monty.h"

/**
 * execute - doubly linked list representation of a stack (or queue)
 * @argc: Argument count
 * @argv: Array of arguments
 *
 * Return: 0
 */

int execute(char **tokens, stack_t **stack, unsigned int line_number)
{
	char *token_1 = tokens[0];
	char *token_2 = NULL;
	int int_token = 0;

	if (strcmp(*tokens, "push") == 0)
	{
		token_2 = tokens[1];
		if (int_OK(token_2) == 0)
			int_token = atoi(token_2);
	};
	do_Functions(token_1, int_token, stack, line_number);
	free_everything(tokens);
	return (0);
}
