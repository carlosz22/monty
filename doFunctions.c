#include "monty.h"

/**
 * do_Functions - Find the functions of the opcodes to execute
 * @token: Opcode name
 * @int_token: Integer to push
 * @stack: Doubly linked list
 * @line_number: Number of line
 */

int do_Functions(char *token, int int_token, stack_t **stack, unsigned int line_number)
{
	int opc = 0;

	instruction_t opcodes_Fun[] = {
	{"pall", pall_opc}, {"pint", pint_opc},
	{"pop", pop_opc}, {"swap", swap_opc},
	{NULL, NULL}
	};

	if (strcmp(token, "push") == 0)
	{
		push_opc(stack, int_token, line_number);
		return (0);
	};

	for (opc = 0; opcodes_Fun[opc].opcode != NULL; opc++)
	{
		if (strcmp(opcodes_Fun[opc].opcode, token) == 0)
		{
			opcodes_Fun[opc].f(stack, line_number);
			return (0);
		};
	}

	if (opcodes_Fun[opc].opcode == NULL)
	{
		printf("Error");
		exit(EXIT_FAILURE);
	};

	return (0);
}
