#ifndef PRINTF_H
# define PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft.h"

int	ft_format_check(const char *apFormat, va_list str);
int	ft_printf(const char *apFormat, ...);

#endif
