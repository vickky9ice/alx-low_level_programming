#include "lists.h"

/**
 * insert_nodeint_at_index - add node to list
 * @head: of the list
 * @index: index to put new node
 * @n: int to_store_in node
 *
 * Return:  new node, NULL if failed :c
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	unsigned int i;
	listint_t *tmpnode, *new;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		*head = new, new->next = NULL, new->n = n;
		return (new);
	}
	else if (index == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->next = *head, new->n = n, *head = new;
		return (new);
	}

	i = 1, index++, tmpnode = *head;
	while (i < index - 1 && tmpnode->next != NULL)
		tmpnode = tmpnode->next,	i++;
	if (i != index - 1)
	{
		return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = tmpnode->next;
	tmpnode->next = new;

	return (new);
}
