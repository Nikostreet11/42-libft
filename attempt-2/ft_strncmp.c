/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:49:05 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/23 12:10:53 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*us1;
	const unsigned char	*us2;
	size_t				idx;
	int					value;

	us1 = (const unsigned char *) s1;
	us2 = (const unsigned char *) s2;
	idx = 0;
	value = 0;
	while (idx < n)
	{
		value = us1[idx] - us2[idx];
		if (value || !us1[idx] || !us2[idx])
		{
			return (value);
		}
		idx++;
	}
	return (value);
}
