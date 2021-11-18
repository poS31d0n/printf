/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscot <sscot@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:19:39 by sscot             #+#    #+#             */
/*   Updated: 2021/10/23 18:03:50 by sscot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*r;
	unsigned int	i;
	unsigned int	gglen;

	i = 0;
	if (!s)
		return (NULL);
	gglen = ft_strlen(s);
	if (start > gglen)
		return (ft_strdup(""));
	gglen -= start;
	if (len >= gglen)
		len = gglen;
	r = (char *)malloc(sizeof(char) * (len + 1));
	if (!r)
		return (NULL);
	while (i < len)
	{
		r[i] = s[start + i];
		i++;
	}
	r[i] = '\0';
	return (r);
}
