/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 01:49:10 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/22 16:19:50 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "utils.h"
#include "libft.h"

void	ft_write_lst(t_list *node)
{
	if (!node)
	{
		write(STDOUT_FILENO, "(nil)", 5);
	}
	while (node)
	{
		write(STDOUT_FILENO, "[ ", 2);
		write(STDOUT_FILENO, node->content, ft_strlen(node->content));
		write(STDOUT_FILENO, " ]", 2);
		node = node->next;
		if (node)
		{
			write(STDOUT_FILENO, " -> ", 4);
		}
	}
}
