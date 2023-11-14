#include "monty.h"

/**
 *f_sub- sustration
 *@bhdl: stack bhdl
 *@rkmggdi: line_abofahd
 *Return: no return
 */
void f_sub(stack_t **bhdl, unsigned int rkmggdi)
{
	stack_t *smma;
	int sus, alaes;

	smma = *bhdl;
	for (alaes = 0; smma != NULL; alaes++)
		smma = smma->newolk;
	if (alaes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", rkmggdi);
		fclose(bus.mostnd);
		free(bus.hagats);
		free_stack(*bhdl);
		exit(EXIT_FAILURE);
	}
	smma = *bhdl;
	sus = smma->newolk->n - smma->n;
	smma->newolk->n = sus;
	*bhdl = smma->newolk;
	free(smma);
}
