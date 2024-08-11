/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 01:49:10 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/11 17:12:55 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

t_list	*ft_lstget(t_list *node, size_t pos)
{
	size_t	idx;

	if (!(node))
	{
		return (NULL);
	}
	idx = 0;
	while (node && idx < pos)
	{
		node = node->next;
		idx++;
	}
	if (idx == pos)
	{
		return (node);
	}
	return (NULL);
}
