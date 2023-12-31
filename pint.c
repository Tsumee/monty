#include "monty.h"

/**
  * pint - prints value at top of the stack
  */
void pint(stack_t **stack, unsigned int ln)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", ln);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
