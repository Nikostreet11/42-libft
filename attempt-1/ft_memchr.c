/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 15:42:22 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/04 16:00:13 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				idx;
	unsigned const char	*mem;

	mem = s;
	idx = 0;
	while (idx < n)
	{
		if (mem[idx] == (unsigned char) c)
		{
			return (void *) (mem + idx);
		}
		idx++;
	}
	return (NULL);
}
