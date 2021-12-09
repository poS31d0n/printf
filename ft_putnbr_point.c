
#include "ft_printf.h"

static int	ft_pointlen(size_t n)
{
	int	i;

	i = 1;
	while (n > 15)
	{
		n /= 16;
		i++;
	}
	return (i);
}

int	ft_putnbr_point(size_t n)
{
	int		i;
	char	*str;
	int		result;

	i = ft_pointlen(n);
	str = (char *)malloc(sizeof(char) * (i + 3));
	if (!str)
		return (0);
	str[0] = '0';
	str[1] = 'x';
	str[i + 2] = '\0';
	while (i)
	{
		i--;
		if (n % 16 >= 10)
			str[i + 2] = 'a' + n % 16 - 10;
		else
			str[i + 2] = '0' + n % 16;
		n /= 16;
	}
	result = ft_putstr(str);
	free(str);
	return (result);
}
