#include "monty.h"

/**
 * free_stack - frees a doubly linked list
 * @bhdl: bhdl of the stack
 */
void free_stack(stack_t *bhdl)
{
	stack_t *smma;

	smma = bhdl;
	while (bhdl)
	{
		smma = bhdl->newolk;
		free(bhdl);
		bhdl = smma;
	}
}
