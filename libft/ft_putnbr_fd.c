/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscot <sscot@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:48:58 by sscot             #+#    #+#             */
/*   Updated: 2021/10/22 10:48:58 by sscot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	uns;

	uns = (unsigned int)n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		uns *= -1;
	}
	if (uns >= 10)
		ft_putnbr_fd(uns / 10, fd);
	ft_putchar_fd(uns % 10 + '0', fd);
}
