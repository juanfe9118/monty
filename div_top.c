#include "monty.h"

/**
 * div_top - divides the fisrt element in a stack
 * by the second element of the stack and removes
 * the top element to leave the result in a new top
 * @stack: the stack as a doubly linked list
 * @line_number: the line number
 * Return: nothing
 */
void div_top(stack_t **stack, unsigned int line_number)
{
	stack_t *div = *stack;
	size_t len = stack_len(*stack);

	if (len < 2)
	{
		dprintf(STDERR_FILENO, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	div = div->next;
	if ((*stack)->n == 0)
	{
		dprintf(STDERR_FILENO, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	div->n /= (*stack)->n;
	pop_stack(stack, line_number);
}
