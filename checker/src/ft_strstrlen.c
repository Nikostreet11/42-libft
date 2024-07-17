/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:50:56 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/17 13:35:04 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

size_t	ft_strstrlen(char **s)
{
	size_t	idx;

	idx = 0;
	while (s[idx])
	{
		idx++;
	}
	return (idx);
}
