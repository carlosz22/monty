#include "monty.h"

/**
 * hsh_splitpath - Split the line wrote in the console.
 * @value: Line wrote in console.
 * Return: An array with all words splited.
 */

char **tokenizer(char *value)
{
	char **tokens;

	tokens = _strtok(value);
	if (tokens == NULL)
	{
		perror("shell:, Error allocating the buffer");
		return (NULL);
	}

    return (tokens);
}
