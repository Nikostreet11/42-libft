/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:44:21 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/23 12:23:56 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == ' '
		|| c == '\f'
		|| c == '\n'
		|| c == '\r'
		|| c == '\t'
		|| c == '\v')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	num;
	int	sgn;
	int	idx;

	idx = 0;
	sgn = 1;
	while (ft_isspace(nptr[idx]))
	{
		idx++;
	}
	if (nptr[idx] == '+' || nptr[idx] == '-')
	{
		if (nptr[idx] == '-')
			sgn *= -1;
		idx++;
	}
	num = 0;
	while (ft_isdigit(nptr[idx]))
	{
		num = num * 10 + nptr[idx] - '0';
		idx++;
	}
	num *= sgn;
	return (num);
}
