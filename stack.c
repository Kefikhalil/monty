#include "monty.h"

/**
 * push - stack pushing operation
 * @stack: pointer to the struct
 * @ln : line numbers
 * Return: void
**/

void push(stack_t **stack, unsigned int x)
{
	int wa;
	char *dp;
	stack_t *head;

	dp = strtok(NULL, " \n\t\a");

	if (dp == NULL || check_dig(dp) < 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", x);
		clean_stack(*stack);
		clean_all();
		exit(EXIT_FAILURE);
	}
	war = atoi(dp);
	head = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		fprintf(stderr, "Error: malloc failed)");
		clean_stack(*stack);
		clean_all();
		exit(EXIT_FAILURE);
	}

	head->n = war;
	head->next = NULL;
	head->prev = NULL;

	if (*stack != NULL)
	{
		(*stack)->prev = head;
		head->next = *stack;
	}

	*stack = head;

}
