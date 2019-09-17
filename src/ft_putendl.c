#include "fillit.h"

size_t		ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char const *s)
{
	write(1, s, ft_strlen(s));
}

void		ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
