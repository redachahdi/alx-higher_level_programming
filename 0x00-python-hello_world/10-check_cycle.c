#include "lists.h"
#include <stdlib.h>
/**
 * check_cycle - is a function taht checks if a singly linked
 *
 * list - is the linked list
 *
 * Return: is the 0 if cycle, and 1 if no cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *t_cycle, *h_cycle;

	t_cycle = list;
	h_cycle = list;

	while (t_cycle && h_cycle)
	{
		if (h_cycle->next == NULL)
		{
			return (0);
		}
		t_cycle = t_cycle->next;
		h_cycle = h_cycle->next->next;
		if (t_cycle == h_cycle)
		{
			return (1);
		}
	}

	return (0);
}
