/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:07:21 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/23 11:36:48 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	idx;

	idx = 0;
	while (idx + 1 < size && src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}
	if (idx < size)
	{
		dest[idx] = '\0';
	}
	return (ft_strlen(src));
}
