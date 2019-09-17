#include "fillit.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*p1;

	p1 = *alst;
	while (p1 != NULL)
	{
		del(p1->content, p1->content_size);
		*alst = p1->next;
		free(p1);
		p1 = *alst;
	}
	*alst = NULL;
}
