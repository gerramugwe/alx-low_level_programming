#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - Adds a new node at the beginning of a linked list
  * @head: The head of the linked list
  * @n: The value to add to the new node
  *
  * Return: The address of the new element, or NULL it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *list_new, *current;

	list_new = malloc(sizeof(listint_t));
	if (list_new == NULL)
		return (NULL);
	list_new->n = n;
	list_new->next = NULL;

	if (*head == NULL)
	{
		*head = list_new;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = list_new;
	return (*head);
}
