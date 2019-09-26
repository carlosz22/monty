#include "monty.h"

/**
 * execute - doubly linked list representation of a stack (or queue)
 * @fp: File descriptor
 * @buffer: Buffer from tokenizer
 * @tokens: Array of tokens
 * @stack: Doubly linked list
 * @line_number: Line number
 *
 * Return: 0
 */

int execute(FILE *fp, char *buffer, char **tokens,
stack_t **stack, unsigned int line_number)
{
	char *token_1 = tokens[0];
	char *token_2 = NULL;
	int int_token = 0;

	if (strcmp(*tokens, "push") == 0)
	{
		token_2 = tokens[1];
		if (int_OK(token_2) == -1)
		{
			fprintf(stderr,"L%i: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
		int_token = atoi(token_2);
	};
	check_errors(fp, buffer, token_1, token_2, stack, line_number);
	if (strcmp(token_1, "pall") == 0 && *stack == NULL)
		return (0);
	do_Functions(token_1, int_token, stack, line_number);
	return (0);
}
