#include "monty.h"

/**
 * get_inst - function that finds the correct function for tok
 * @tok: the parsed token containing the instruction
 * Return: nothing
 */
void (*get_inst(char *tok))(stack_t **, unsigned int)
{
	instruction_t inst[] = {
		{"push", push_stack},
		{"pall", print_stack},
		{"pint", print_top},
		{NULL, NULL}
	};
	int i = 0;

	while (inst[i].opcode != NULL)
	{
		if (strcmp(tok, inst[i].opcode) == 0)
			return (inst[i].f);
		i++;
	}
	return (NULL);
}
