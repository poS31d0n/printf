/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscot <sscot@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:18:40 by sscot             #+#    #+#             */
/*   Updated: 2021/10/22 12:37:21 by sscot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		size;
	char	*r;

	size = 0;
	while (src[size])
		size++;
	r = (char *)malloc(size + 1);
	if (!r)
		return (NULL);
	size = -1;
	while (src[++size])
		r[size] = src[size];
	r[size] = '\0';
	return (r);
}
