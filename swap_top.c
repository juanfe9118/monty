#include "monty.h"

/**
 * swap_top - swaps the first two elements in a stack
 * @stack: the stack as a doubly linked list
 * @line_number: the line number
 * Return: nothing
 */
void swap_top(stack_t **stack, unsigned int line_number)
{
	stack_t *newHead = *stack, *head = *stack;
	size_t len = stack_len(*stack);

	if (len < 2)
	{
		dprintf(STDERR_FILENO, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	newHead = newHead->next;
	head->next = newHead->next;
	newHead->next = head;
	newHead->prev = NULL;
	head->prev = newHead;
	*stack = newHead;
}
