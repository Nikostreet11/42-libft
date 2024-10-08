/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:50:05 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/22 16:19:39 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "utils.h"

void	ft_write_memory(void *mem, size_t siz)
{
	if (mem == NULL)
	{
		write(STDOUT_FILENO, "(nil)", 5);
	}
	else
	{
		write(STDOUT_FILENO, mem, siz);
	}
}
