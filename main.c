#include "monty.h"

/**
 * main - doubly linked list representation of a stack (or queue)
 * @argc: Argument count
 * @argv: Array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	interpreter(argv[1]);

	return (0);
}
