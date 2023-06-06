#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * insert_node - function that insert in the  list
 *
 * @head: is the head of the list
 * @number:is the number
 *
 * Return: is the adresse of new node
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	tmp = *head;
	if (*head == NULL)
	{
		new = add_nodeint_end(head, number);
		return (new);
	}
	if (tmp->n > number)
	{
		new->next = tmp;
		new->n = number;
		*head = new;
		return (new);
	}
	while (tmp->next)
	{
		if (number < tmp->next->n)
		{
			new->next = tmp->next;
			tmp->next = new;
			new->n = number;
			return (new);
		}
		tmp = tmp->next;
	}
	new = add_nodeint_end(head, number);
	return (new);
}
