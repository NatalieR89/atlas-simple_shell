#include "main.h"

#define BUFFER_SIZE 1024
#define MAX_ARGS 32

void tokenize_input(char *buffer, char *args[]);
int execute_command(char *args[], int num_args);

/**
 * tokenize_input -  Tokenizes input into separate arguments
 *
 * @buffer: input string to be tokenized
 * @args: array of strings where tokens will be stored
 */

void tokenize_input(char *buffer, char *args[])
{
	char *token = strtok(buffer, " ");
	int i = 0;

	while (token != NULL && i < MAX_ARGS - 1)
	{
		args[i++] = token;
		token = strtok(NULL, " ");
	}
	args[i] = NULL;
}

