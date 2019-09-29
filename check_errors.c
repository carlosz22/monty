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
	/* char *opcodes[] = {"push", "pall", "pop", "pint", "swap", "add",
"sub", "mul", "div", "mod", "nop", "pchar", "pstr", NULL};
	int delete = 0, i = 0; */

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
	/* for (i = 0; i < 13; i++)
	{
		if (strcmp(token_1, opcodes[i]) == 0 && (data.stack) == NULL &&
			strcmp(token_1, "push") != 0 && strcmp(token_1, "pint") != 0)
		{
			fprintf(stderr, "L%d: can't %s stack too short\n", line_number, opcodes[i]);
			delete = 1;
		};
	} */
}
