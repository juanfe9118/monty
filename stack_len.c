#include "monty.h"

/**
 * stack_len - returns the length of a stack_t stack
 * @h: the stack
 * Return: the length of the stack
 */
size_t stack_len(const stack_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
