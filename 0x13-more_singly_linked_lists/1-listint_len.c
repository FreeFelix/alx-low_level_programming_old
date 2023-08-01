#include "lists.h"

/**
 * size_t listint_len - function that returns the number of elements in a linked listint_t list.
 * @h: par to used to assign data to node
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t data = 0;

while (h != NULL)
{
data++;
h = h->next;
}
return (data);
}


