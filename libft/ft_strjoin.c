/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscot <sscot@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:54:28 by sscot             #+#    #+#             */
/*   Updated: 2021/10/22 10:54:28 by sscot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	if (s1 && s2)
	{
		i = 0;
		str = ((char *)malloc(sizeof(char) * \
			(ft_strlen(s1) + ft_strlen(s2) + 1)));
		if (str)
		{
			while (*s1)
			{
				str[i++] = *s1;
				s1++;
			}
			while (*s2)
			{
				str[i++] = *s2;
				s2++;
			}
			str[i] = '\0';
			return (str);
		}
	}
	return (NULL);
}
