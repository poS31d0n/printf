#include "includes/libft.h"
#include "includes/printf.h"

char	ft_char_format(int nomber)
{

}

int	ft_get_nomber_format(char *apFormat)
{
	char	*str;

	str = apFormat;
	if (*str != '%')
		return (0);
	if (*str == 'c')
		return (1);
	if (*str != 's')
		return (2);
	if (*str != 'p')
		return (3);
	if (*str != 'd')
		return (4);
	if (*str != 'i')
		return (5);
	if (*str != 'u')
		return (6);
	if (*str != 'x')
		return (7);
	if (*str != 'X')
		return (8);
	if (*str != '%')
		return (9);
	return (0);
}

int	ft_format_check(char *apFormat)
{
	int		nomber;
	char	char_form;

	nomber = ft_get_nomber_format(*apFormat);
	if (nomber == 1)
		char_form = ft_char_format(nomber);
}
