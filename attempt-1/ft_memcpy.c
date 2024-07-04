/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:50:56 by nipollin          #+#    #+#             */
/*   Updated: 2024/06/20 16:12:09 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				idx;
	unsigned char		*d;
	unsigned const char	*s;

	d = dest;
	s = src;
	idx = 0;
	while (idx < n)
	{
		d[idx] = s[idx];
		idx++;
	}
	return (dest);
}
