/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscot <sscot@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:52:11 by sscot             #+#    #+#             */
/*   Updated: 2021/10/22 10:52:11 by sscot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	size_t			len;

	i = 0;
	if (s && f)
	{
		len = ft_strlen(s);
		while (i < len)
		{
			f(i, s);
			i++;
			s++;
		}
	}
}
