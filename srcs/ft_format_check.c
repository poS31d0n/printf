
#include "includes/printf.h"

static int	ft_get_nomber_format(char *apFormat, va_list str)
{
	if (apFormat == '%')
		return (ft_putchar('%'));
	else if (apFormat == 'c')
		return (ft_putchar(va_arg(apFormat, int)));
	else if (apFormat == 's' )
		return (ft_putstr(va_arg(apFormat, char *)));
	else if (apFormat == 'd' || apFormat == 'i')
		return (ft_putnbr(va_arg(apFormat, int)));
	else if (apFormat == 'u')
		return (ft_putnbr_new(va_arg(apFormat, unsigned int)));
	else if (apFormat == 'p')
		return (ft_putnbr_point(va_arg(apFormat, unsigned long)));
	else if (apFormat == 'x')
		return (ft_putnbr_low(va_arg(apFormat, unsigned long)));
	else if (apFormat == 'X')
		return (ft_putnbr_up(va_arg(apFormat, unsigned long)));
	return (0);
}

int	ft_format_check(const char *apFormat, va_list str)
{
	int	i;
	int	answer;

	if (!apFormat)
		return (0);
	i = 0;
	answer = 0;
	while (apFormat[i])
	{
		if (apFormat[i] != '%')
			answer += write(1, apFormat + i, 1);
		if (apFormat[i] == '%')
		{
			answer += ft_get_nomber_format(apFormat[i + 1], str);
			i++;
		}
		i++;
	}
	return (answer);
}
