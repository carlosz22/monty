#include "monty.h"

/**
 * main - doubly linked list representation of a stack (or queue)
 * @argc: Argument count
 * @argv: Array of arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error"); // Organizar
		exit(EXIT_FAILURE);
	}
	interpreter(argv[1]);

	return (0);
}
