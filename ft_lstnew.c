#include "fillit.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*ptr;

	ptr = (t_list *)ft_memalloc(sizeof(t_list));
	if (ptr == NULL)
		return (NULL);
	if (content == NULL)
	{
		ptr->content = NULL;
		ptr->content_size = 0;
		ptr->next = NULL;
	}
	else
	{
		if ((ptr->content = ft_memalloc(content_size)) == NULL)
			return (NULL);
		ft_memcpy(ptr->content, content, content_size);
		ptr->content_size = content_size;
		ptr->next = NULL;
	}
	return (ptr);
}
