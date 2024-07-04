/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:50:56 by nipollin          #+#    #+#             */
/*   Updated: 2024/06/26 12:37:40 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;
	short int			sgn;
	size_t				srt;
	size_t				idx;

	d = dest;
	s = src;
	sgn = 1;
	srt = 0;
	if (dest - src > 0)
	{
		sgn = -1;
		srt = n - 1;
	}
	idx = 0;
	while (idx < n)
	{
		d[srt + (sgn * idx)] = s[srt + (sgn * idx)];
		idx++;
	}
	return (dest);
}
