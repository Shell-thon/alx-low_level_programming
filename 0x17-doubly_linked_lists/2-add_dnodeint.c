include "lists.h"

/**
 * _createNode - create a new node
 *
 * @prmNbr: name
 *
 * Return: new element
 */
dlistint_t *_createNode(const int prmNbr)
{
dlistint_t *new = malloc(sizeof(dlistint_t));

if (new == NULL)
return (NULL);

new->n = prmNbr;
new->next = NULL;
new->prev = NULL;

return (new);
}

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 * @head: pointer to last element
 * @n: number
 *
 * Return: new last element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

if (head == NULL)
return (NULL);

new = _createNode(n);

if (new == NULL)
return (NULL);

if (*head == NULL)
*head = new;
else
{
(*head)->prev = new;
new->next = *head;
*head = new;
}

return (new);
}
