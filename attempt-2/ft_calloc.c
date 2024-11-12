/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:59:13 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/22 16:12:43 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	is_overflow(size_t a, size_t b)
{
	int	mul;

	if (a == 0 || b == 0)
	{
		return (0);
	}
	mul = a * b;
	if (a == mul / b)
	{
		return (0);
	}
	return (1);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;
	size_t	mem_s;

	mem_s = nmemb * size;
	if (is_overflow(nmemb, size))
	{
		return (NULL);
	}
	mem = malloc(mem_s);
	if (!mem)
	{
		return (NULL);
	}
	ft_bzero(mem, mem_s);
	return (mem);
}
