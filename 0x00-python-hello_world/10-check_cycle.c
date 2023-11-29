#include "lists.h"

/**
 * check_cycle - checks if list is a cycle or not
 * @list: The list to check
 * Return: 0 if its not a cycle but -1 if its a cycle
 */


int check_cycle(listint_t *list)
{
	listint_t *two, *one;

	if (!list || !list->next)
		return(0);

	two = list;
	one = list;

	while (one != NULL && two != NULL && two->next != NULL)
	{
		one = list->next;
		two = list->next->next;

		if (one == two)
		{
		return(1);
		}
	}
	return(0);
}
