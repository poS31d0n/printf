
#include "includes/printf.h"

int	ft_printf(const char *apFormat, ...)
{
	va_list	str;
	int		i;

	va_start(str, apFormat);
	i = ft_format_check(apFormat, str);
	va_end(str);
	return (i);
}
