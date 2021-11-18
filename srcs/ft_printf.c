#include "includes/libft.h"
#include "includes/printf.h"



int	ft_printf(const char *apFormat, ...)
{
	va_list	form;
	int		i;

	i = 0;
	ft_format_check(apFormat);
	while (apFormat[i])
	{
		if (apFormat[i++] == '%')
		{
			ft_test_1(apFormat, i);
			ft_test_2(apFormat, i);
			ft_test_3(apFormat, i);
		}
		i++;
	}
}
