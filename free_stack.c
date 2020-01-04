#include "monty.h"

void free_stack(stack_t **head)
{
	stack_t *tmp, *dump;

	dump = *head;
	if (*head != NULL)
	{
		while (dump != NULL)
		{
			tmp = dump;
			dump = dump->next;
			free(tmp);
		}
		free(dump);
	}
}
