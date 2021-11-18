/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscot <sscot@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 18:24:23 by sscot             #+#    #+#             */
/*   Updated: 2021/10/22 12:23:58 by sscot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*a;

	a = malloc(count * size);
	if (a == 0)
		return (NULL);
	ft_bzero(a, count * size);
	return (a);
}
