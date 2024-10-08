/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:49:05 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/27 12:01:23 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b_idx;
	size_t	l_idx;
	size_t	l_len;

	l_len = ft_strlen(little);
	if (l_len == 0)
	{
		return ((char *) big);
	}
	b_idx = 0;
	while (big[b_idx] && b_idx + l_len <= len)
	{
		l_idx = 0;
		while (big[b_idx + l_idx] && big[b_idx + l_idx] == little[l_idx])
		{
			l_idx++;
			if (little[l_idx] == 0)
			{
				return ((char *) big + b_idx);
			}
		}
		b_idx++;
	}
	return (NULL);
}
