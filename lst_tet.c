#include "fillit.h"

void	deltet(void *content, size_t size)
{
	t_tet	*tet;

	size++;
	tet = (t_tet *)content;
	if (tet->map != NULL)
		free(tet->map);
	free(tet);
}
