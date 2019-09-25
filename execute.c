#include "monty.h"

/**
 * execute - doubly linked list representation of a stack (or queue)
 * @argc: Argument count
 * @argv: Array of arguments
 *
 * Return: 0
 */

int execute(char **tokens, unsigned int line_number, stack_t **stack)
{
	char *token_1 = tokens[0];
	char *token_2 = NULL;
	unsigned int int_token = 0;

	if (strcmp(*tokens, "push") == 0)
	{
		token_2 = tokens[1];
		int_token = int_OK(token_2);
	};
	do_Functions(*tokens, int_token, stack, line_number);
	free_everything(tokens);
	return (0);
}
