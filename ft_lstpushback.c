#include "fillit.h"

void	ft_lstpushback(t_list **alst, t_list *new)
{
	t_list	*current;

	if (alst == NULL || *alst == NULL)
	{
		*alst = new;
		return ;
	}
	current = *alst;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
}
