#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a list
 * @head: Pointer to the address of the head of the list
 * @n: The integer for the new node to contain
 *
 * Return: Address of new element (Success), NULL (fails)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
