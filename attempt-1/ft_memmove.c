/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:50:56 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/26 12:28:57 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_memmove_way(void *d, const void *s, size_t n, size_t *srt)
{
	int	sgn;

	sgn = 1;
	*srt = 0;
	if (d - s > 0)
	{
		sgn = -1;
		*srt = n - 1;
	}
	return (sgn);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;
	int					sgn;
	size_t				srt;
	size_t				idx;

	if (!dest && !src)
	{
		return (NULL);
	}
	sgn = ft_memmove_way(dest, src, n, &srt);
	d = dest;
	s = src;
	idx = 0;
	while (idx < n)
	{
		d[srt + (sgn * idx)] = s[srt + (sgn * idx)];
		idx++;
	}
	return (dest);
}
