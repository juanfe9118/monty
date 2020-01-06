#include "monty.h"

/**
 * pstr_stack - prints the string beggining at the top
 * of the stack, followed by a new line
 * @stack: the stack as a doubly linked list
 * @line_number: the line number
 * Return: nothing
 */
void pstr_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;

	(void) line_number;
	while (head != NULL && head->n != 0 && head->n > 0 && head->n <= 127)
	{
		printf("%c", head->n);
		head = head->next;
	}
	printf("\n");
}
