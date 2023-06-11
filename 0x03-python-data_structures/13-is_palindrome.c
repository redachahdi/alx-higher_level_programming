#include "lists.h"
#include <stddef.h>
/**
 * is_palindrome - is the function of the  check
 *
 * @head: is the list
 *
 * Return: if  0 or the  1
 */
int is_palindrome(listint_t **head)
{
	const listint_t *cur;
	int len_gh, a, b;
	int array[10000];

	if (*head == NULL)
		return (1);
	cur = *head;
	len_gh = 0;
	while (cur != NULL)
	{
		cur = cur->next;
		len_gh++;
	}
	if (len_gh == 1)
		return (1);

	cur = *head;
	a = 0;
	while (cur != NULL)
	{
		array[a] = cur->n;
		a++;
		cur = cur->next;
	}
	b = 0;
	a--;
	len_gh--;
	while (a >= (len_gh / 2))
	{
		if (array[a] != array[b])
			return (0);
		a--;
		b++;
	}
	return (1);
}
