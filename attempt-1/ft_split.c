/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:44:21 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/23 14:56:04 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

#include <unistd.h>

static char const	*ft_next_token(char const *str, char c)
{
	size_t	idx;

	idx = 0;
	while (str[idx] && str[idx] == c)
	{
		idx++;
	}
	return (str + idx);
}

static size_t	ft_tokenlen(char const *str, char c)
{
	size_t	idx;

	idx = 0;
	while (str[idx] && str[idx] != c)
	{
		idx++;
	}
	return (idx);
}

static size_t	ft_tokens(char const *str, char c)
{
	size_t	num;
	size_t	len;

	num = 0;
	str = ft_next_token(str, c);
	while (*str)
	{
		len = ft_tokenlen(str, c);
		str = ft_next_token(str + len, c);
		num++;
	}
	return (num);
}

static char	**ft_free_strstr(char **str, size_t len)
{
	size_t	idx;

	idx = 0;
	while (idx < len)
	{
		free(str[idx]);
		idx++;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	split_i;
	size_t	split_l;
	size_t	token_l;

	split_l = ft_tokens(s, c);
	split = (char **) ft_calloc(split_l + 1, sizeof(char *));
	if (!split)
		return (NULL);
	split_i = 0;
	while (split_i < split_l)
	{
		s = ft_next_token(s, c);
		token_l = ft_tokenlen(s, c);
		split[split_i] = (char *) ft_calloc(token_l + 1, sizeof(char));
		if (!split[split_i])
			return (ft_free_strstr(split, split_i));
		ft_strlcpy(split[split_i], s, token_l + 1);
		s += token_l;
		split_i++;
	}
	split[split_i] = NULL;
	return (split);
}
