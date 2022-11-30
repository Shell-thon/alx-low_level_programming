#include "lists.h"
/**
 *  print_listint - function
 *  @h: string to print
 *
 *  Description: Fnction to print all elements in listint_t
 *  Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
