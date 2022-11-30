#include "lists.h"
/**
 *  insert_nodeint_at_index - function
 *  @head: double pointer to first node of list
 *  @idx: index where new node should be added
 *  @n: new node to insert
 *
 *  Description: function to insert a new node at a given position
 *  Return: the address of the new node, or null if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;

	listint_t *new;
	listint_t *temp;

	if (*head == NULL)
		return (NULL);

	temp = *head;

	while (temp != NULL)
	{
		if (count == idx - 1)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
			{
				return (NULL);
			}
			else
			{
				new->n = n;
				new->next = temp->next;
				temp->next = new;
				return (new);
			}

		}
		if (temp->next != NULL)
			temp = temp->next;
		count++;
	}
	return (NULL);
}
