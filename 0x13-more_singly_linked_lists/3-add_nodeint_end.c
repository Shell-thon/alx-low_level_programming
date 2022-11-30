#include "lists.h"

/**
 *  add_nodeint_end - function
 *  @head: double pointer - points to address of ptr to first element
 *  @n: integer value of new node
 *
 *  Description: function to add new node at the end of a listint_t list
 *  Return: add of the new element, or NULL if fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(lsitint_t));
	if (new == NULL)
		return (NULL);

		new->n = n;
		new->next = NULL;

		if (*head == NULL)
		{
			*head = new;
			return (new);
		}

		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;

		return (new);
}
