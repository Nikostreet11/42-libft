/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:50:56 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/26 12:28:50 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				idx;
	unsigned char		*d;
	unsigned const char	*s;

	if (!dest && !src)
	{
		return (NULL);
	}
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
