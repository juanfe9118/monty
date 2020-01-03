#include "monty.h"

int main(int ac, char **av)
{
	FILE *b_code = NULL;
	char *line = NULL, *tok = NULL, *tok2 = NULL;
	size_t len = 0;
	ssize_t len_line = 0;

	if (ac != 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	b_code = fopen(av[1], "r");
	if (b_code == NULL)
	{
		dprintf(2, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}
	while ((len_line = getline(&line, &len, b_code)) != -1)
	{
		tok = strtok(line, " ");
		if (tok == "push")
			tok2 = strtok (NULL, " ");
	}
	return (0);
}
