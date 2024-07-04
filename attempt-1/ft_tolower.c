/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:11:57 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/02 10:28:30 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(int c)
{
	return ('A' <= c && c <= 'Z');
}

int		ft_tolower(int c)
{
	if (ft_isupper(c))
	{
		c += 'a' - 'A';
	}
	return (c);
}