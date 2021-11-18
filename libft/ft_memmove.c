/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscot <sscot@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:40:38 by sscot             #+#    #+#             */
/*   Updated: 2021/10/16 17:05:17 by sscot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*f;
	unsigned char	*d;

	f = (unsigned char *)dst;
	d = (unsigned char *)src;
	if (!dst && !src)
		return (dst);
	if (dst > src)
		while (len--)
			f[len] = d[len];
	else
		while (len--)
			*f++ = *d++;
	return (dst);
}
