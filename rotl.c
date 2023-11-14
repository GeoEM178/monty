#include "monty.h"

/**
 *f_rotl- rotates the stack to the top
 *@bhdl: stack bhdl
 *@rkmggdi: line_abofahd
 *Return: no return
 */
void f_rotl(stack_t **bhdl,  __attribute__((unused)) unsigned int rkmggdi)
{
	stack_t *tmp = *bhdl, *smma;

	if (*bhdl == NULL || (*bhdl)->newolk == NULL)
	{
		return;
	}
	smma = (*bhdl)->newolk;
	smma->newdf = NULL;
	while (tmp->newolk != NULL)
	{
		tmp = tmp->newolk;
	}
	tmp->newolk = *bhdl;
	(*bhdl)->newolk = NULL;
	(*bhdl)->newdf = tmp;
	(*bhdl) = smma;
}
