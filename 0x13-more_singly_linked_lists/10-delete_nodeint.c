#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
if (head == NULL || *head == NULL)
{
return (-1);
}

if (index == 0)
{
 listint_t *temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}

listint_t *current = *head;
unsigned int count = 0;
while (current != NULL && count < index - 1)
{
current = current->next;
count++;
}

if (current == NULL || current->next == NULL)
{
return -1;
}

listint_t *temp = current->next;
current->next = temp->next;
free(temp);

return (1);
}
