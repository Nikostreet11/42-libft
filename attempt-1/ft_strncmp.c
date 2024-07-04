/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:49:05 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/04 15:20:46 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	idx;
	int		value;

	idx = 0;
	value = 0;
	while (idx < n)
	{
		value = s1[idx] - s2[idx];
		if (value || !s1[idx] || !s2[idx])
		{
			return (value);
		}
		idx++;
	}
	return (value);
}
