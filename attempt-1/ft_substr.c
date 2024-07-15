/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 18:18:34 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/15 18:47:31 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t min(size_t a, size_t b)
{
	if (a < b)
	{
		return (a);
	}
	return (b);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	sub_len;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (s_len < start)
	{
		return (NULL);
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
