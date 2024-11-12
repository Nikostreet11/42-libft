/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:08:31 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/04 15:21:07 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < size && dest[i] != '\0')
	{
		i++;
	}
	while (i + j + 1 < size && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i + j < size)
	{
		dest[i + j] = '\0';
	}
	return (i + ft_strlen(src));
}
