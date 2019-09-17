#include "fillit.h"
#include <string.h>
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*ptr;

	ptr = (char *)malloc(size + 1);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, '\0', size + 1);
	return (ptr);
}
