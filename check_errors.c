#include "monty.h"

/**
 * check_errors - doubly linked list representation of a stack (or queue)
 * @token_1: First token
 * @token_2: Second token
 * @line_number: Line number
 *
 * Return: 0
 */

void check_errors(char *token_1, char *token_2, unsigned int line_number)
{
	if (strcmp(token_1, "push") == 0)
	{
		if (int_OK(token_2) != 0 || token_2 == NULL)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			free_all(1);
			exit(EXIT_FAILURE);
		}
	}
	if (strcmp(token_1, "pall") == 0 && (data.stack) == NULL)
		return;
}
