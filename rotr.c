#include "monty.h"

/**
 *f_rotr- rotates the stack to the bottom
 *@bhdl: stack bhdl
 *@rkmggdi: line_abofahd
 *Return: no return
 */
void f_rotr(stack_t **bhdl, __attribute__((unused)) unsigned int rkmggdi)
{
	stack_t *nasko;

	nasko = *bhdl;
	if (*bhdl == NULL || (*bhdl)->newolk == NULL)
	{
		return;
	}
	while (nasko->newolk)
	{
		nasko = nasko->newolk;
	}
	nasko->newolk = *bhdl;
	nasko->newdf->newolk = NULL;
	nasko->newdf = NULL;
	(*bhdl)->newdf = nasko;
	(*bhdl) = nasko;
}
