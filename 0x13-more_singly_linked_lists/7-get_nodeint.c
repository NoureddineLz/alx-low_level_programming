#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;
 unsigned int count = 0;

while (current != NULL)
{
if (count == index)
{
return current; /*Return the node at the specified index*/
}
current = current->next;
count++;
}

return (NULL); /*Node at the specified index does not exist*/
}
