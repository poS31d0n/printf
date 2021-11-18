/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscot <sscot@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:50:39 by sscot             #+#    #+#             */
/*   Updated: 2021/10/22 10:50:39 by sscot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char charset)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if ((str[i + 1] == charset || str[i + 1] == '\0')
			&& !(str[i] == charset || str[i] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static void	write_word(char *dst, const char *src, char charset)
{
	int	i;

	i = 0;
	while (!(src[i] == charset || src[i] == '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

static int	write_split(char **split, const char *str, char charset)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (str[i] == charset)
			i++;
		else
		{
			j = 0;
			while (!(str[i + j] == charset || str[i + j] == '\0'))
				j++;
			split[word] = (char *)malloc(sizeof(char) * (j + 1));
			if (!split[word])
				return (0);
			write_word(split[word], str + i, charset);
			i += j;
			word++;
		}
	}
	return (1);
}

static char	**ft_free_split(char **src, int i)
{
	while (i > 0)
	{
		i--;
		free((void *)src[i]);
	}
	free((void *)src);
	return (NULL);
}

char	**ft_split(const char *str, char c)
{
	char	**res;
	int		words;

	if (!str)
		return (NULL);
	words = count_words(str, c);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	if (res == NULL)
		return (ft_free_split(res, 0));
	res[words] = 0;
	write_split(res, str, c);
	return (res);
}
