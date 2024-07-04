/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:49:05 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/04 16:46:13 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	idx;
	int		value;
	unsigned const char *mem1;
	unsigned const char *mem2;

	mem1 = s1;
	mem2 = s2;
	idx = 0;
	value = 0;
	while (idx < n)
	{
		value = mem1[idx] - mem2[idx];
		if (value)
		{
			return (value);
		}
		idx++;
	}
	return (0);
}
