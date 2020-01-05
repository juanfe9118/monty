#include "monty.h"

/**
 * sub_top - subtracts the top element of the stack
 * from the second top element of the stack and
 * removes the top element to leave the result
 * in a new top
 * @stack: the stack as a doubly linked list
 * @line_number: the line number
 * Return: nothing
 */
void sub_top(stack_t **stack, unsigned int line_number)
{
	stack_t *sub = *stack;
	size_t len = stack_len(*stack);

	if (len < 2)
	{
		dprintf(STDERR_FILENO, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sub = sub->next;
	sub->n -= (*stack)->n;
	pop_stack(stack, line_number);
}
