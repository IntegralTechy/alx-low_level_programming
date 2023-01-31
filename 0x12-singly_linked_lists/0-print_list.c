#include "list.h"

/**
 * print_list - print elements in a linked list
 *
 * @h: pointer to head first node
 *
 * Return: Number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if(h == NULL)
		return (0);
	while(h != NULL)
	{
		if(h -> str == NULL)
			printf("[%d] %s\n", 0 "(nil)");
		else
			printf("[%d] %s\n", h -> len, h -> str);
		/*increment the count variable*/
		count++;
		h -> next;

	}
	/*prints out the final node as the loop breaks out due to its NULL address*/
	/*printf("[%d] %s\n", h -> len, h -> str);*/

	return (count);

}