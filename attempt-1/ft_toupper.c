/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:11:57 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/02 10:28:43 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_islower(int c)
{
	return ('a' <= c && c <= 'z');
}

int		ft_toupper(int c)
{
	if (ft_islower(c))
	{
		c += 'A' - 'a';
	}
	return (c);
}