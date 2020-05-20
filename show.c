#include "monty.h"

/**
 * pall - display the stack
 * @stack: pointer to the stack
 * @x: line numbers
**/
void pall(stack_t **stack, unsigned int x)
{
	stack_t *temp = *stack;
	(void)x;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	free(temp);
	temp = NULL;
}

/**
  * pint - print from top of the stack
  * @stack: pointer
  * @x: number of lines
  */
void pint(stack_t **stack, unsigned int x)
{
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", x);
		clean_stack(*stack);
		clean_all();
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
/**
  * pop - remove from top the stack
  * @stack: pointer
  * @x: instruction line in case of error
  */
void pop(stack_t **stack, unsigned int x)
{
	if (delete_node(stack) == 0)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", x);
		clean_stack(*stack);
		clean_all();
		exit(EXIT_FAILURE);
	}
}
