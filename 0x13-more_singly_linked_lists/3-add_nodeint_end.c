#include "lists.h"
/**
 *   add_nodeint_end - adds a node at the end of a linked list
 *    @head: pointer to the first element in the list
 *     @n: Int to be added.
 *
 *	Return: The address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)

		*head = node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node;
	}
	return (node);
}
