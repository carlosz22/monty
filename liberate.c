#include "monty.h"

/**
 * liberate - liberate all the memory allocated
 * @fp: File descriptor
 * @buffer: Buffer from tokenizer
 * @tokens: Tokens array
 * @stack: Doubly linked list
 *
 * Return: Nothing
 */

void liberate(FILE *fp, char *buffer, char **tokens, stack_t **stack)
{
	free(buffer);
	free_everything(tokens);
	_free(stack);
	fclose(fp);
}
