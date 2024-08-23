/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 18:18:34 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/23 12:52:30 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	min(size_t a, size_t b)
{
	if (a < b)
	{
		return (a);
	}
	return (b);
}

static char	*ft_emptystr(void)
{
	char	*str;

	str = (char *) ft_calloc(1, sizeof(char));
	if (!str)
	{
		return (NULL);
	}
	*str = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	sub_len;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (s_len < start || len == 0)
	{
		return (ft_emptystr());
	}
	sub_len = min(s_len - start, len);
	sub = (char *) ft_calloc(sub_len + 1, sizeof(char));
	if (!sub)
	{
		return (NULL);
	}
	ft_strlcpy(sub, s + start, sub_len + 1);
	return (sub);
}
