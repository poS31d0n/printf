
#include "ft_printf.h"

static int	ft_pointlen(unsigned int n)
{
	int	answer;

	answer = 1;
	while (n > 15)
	{
		n /= 16;
		answer++;
	}
	return (answer);
}

int	ft_putnbr_low(unsigned int n)
{
	int		i;
	int		result;
	char	*str;

	i = ft_pointlen(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	str[i] = '\0';
	while (i)
	{
		i--;
		if (n % 16 >= 10)
			str[i] = 'a' + n % 16 - 10;
		else
			str[i] = '0' + n % 16;
		n /= 16;
	}
	result = ft_putstr(str);
	free(str);
	return (result);
}
