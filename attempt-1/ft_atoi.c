/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:44:21 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/04 17:35:27 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_atoi(const char *nptr)
{
	int	num;
	int	sgn;
	int	idx;

	idx = 0;
	sgn = 1;
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
