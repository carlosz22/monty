#include "monty.h"

/**
 * check_errors - doubly linked list representation of a stack (or queue)
 * @fp: File descriptor
 * @buffer: Buffer from tokenizer
 * @tokens: Tokens array
 * @token_1: First token
 * @token_2: Second token
 * @stack: Doubly linked list
 * @line_number: Line number
 *
 * Return: 0
 */

void check_errors(FILE *fp, char *buffer, char **tokens,
char *token_1, char *token_2, stack_t **stack, unsigned int line_number)
{
	char *opcodes[] = {"push", "pall", "pop", "pint", "swap", "add", "nop", NULL};
	int i = 0;

	if (strcmp(token_1, "push") == 0)
	{
		if (int_OK(token_2) != 0 || token_2 == NULL)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			liberate(fp, buffer, tokens, stack);
		}
	}

	if (strcmp(token_1, "pall") == 0 && *stack == NULL)
		return;

	for (i = 0; i < 7; i++)
	{
		if (strcmp(token_1, opcodes[i]) == 0 && *stack == NULL &&
			strcmp(token_1, "push") != 0)
		{
			fprintf(stderr, "L%d: can't %s stack too short\n", line_number, opcodes[i]);
			liberate(fp, buffer, tokens, stack);
		}
	}
}
