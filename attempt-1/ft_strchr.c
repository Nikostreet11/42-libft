/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:29:28 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/02 11:09:55 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	idx;
	size_t	siz;

	siz = ft_strlen(s) + 1;
	idx = 0;
	while (idx < siz)
	{
		if (s[idx] == c)
		{
			return (char *) (s + idx);
		}
		idx++;
	}
	return (NULL);
}