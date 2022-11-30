#include "lists.h"

/**
 *   get_nodeint_at_index _ Returns ntn node of a list.
 *    @head: pointer to first node
 *     @index: count of node in list.
 *
 *       Return: The address of node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int note;

	note = 0;
	while (note < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		note++
	}

	return (head);
}
