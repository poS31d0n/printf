
#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_putstr("(null)"));
	while (*s)
	{
		write (1, s, 1);
		s++;
		i++;
	}
	return (i);
}
