#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	size_t size;

	size = 0;
	if (h == NULL)
	return (size);

	while (h)
	{
	printf("%d\n", h->n);
	size++;
	h = h->next;
	}
	return (size);
}
