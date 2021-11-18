/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscot <sscot@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:30:55 by sscot             #+#    #+#             */
/*   Updated: 2021/10/23 12:43:30 by sscot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*f;
	unsigned char	*d;

	f = (unsigned char *)dst;
	d = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	while (n--)
		*f++ = *d++;
	return (dst);
}
