#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list.
 * @head: Pointer to the address of the head of the list.
 * @index: Index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *current;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}
	while (temp != NULL && i < index)
	{
		current = temp;
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		return (-1);
	}
	current->next = temp->next;
	if (temp->next != NULL)
	{
		temp->next->prev = current;
	}
	free(temp);
	return (1);
}