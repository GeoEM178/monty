#include "monty.h"

/**
 * f_push - add node to the stack
 * @bhdl: stack bhdl
 * @rkmggdi: line_abofahd
 * Return: no return
 */
void f_push(stack_t **bhdl, unsigned int rkmggdi)
{
	int n, j = 0, alamf = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				alamf = 1; }
		if (alamf == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", rkmggdi);
			fclose(bus.mostnd);
			free(bus.hagats);
			free_stack(*bhdl);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", rkmggdi);
		fclose(bus.mostnd);
		free(bus.hagats);
		free_stack(*bhdl);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(bhdl, n);
	else
		addqueue(bhdl, n);
}
