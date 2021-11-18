/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscot <sscot@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 18:14:46 by sscot             #+#    #+#             */
/*   Updated: 2021/10/23 12:49:20 by sscot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*f;
	unsigned char	*d;

	f = (unsigned char *)s1;
	d = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n--)
	{
		if (*f == *d)
		{
			f++;
			d++;
		}
		else
			return (*f - *d);
	}
	return (0);
}
