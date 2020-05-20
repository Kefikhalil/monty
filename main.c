#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "monty.h"

/**
* main - entry point
* @argc: instructions number
* @argv: instructions list
* Return: 0
*/

int main(int argc, char **argv)
{

	size_t size = 0;
	stack_t *stack = NULL;
	unsigned int x = 1;
	char *storage = NULL;
        FILE *descriptor;

	storage = NULL;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	descriptor = fopen(argv[1], "r");
	if (descriptor == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((getline(&storage, &size, descriptor)) != -1)
	{
		operations(&stack, x);

		x++;
	}
	clean_stack(stack);
	clean_all();
	return (0);
}
