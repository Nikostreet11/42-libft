/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:08:39 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/31 19:33:22 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "utils.h"

#define BUFFER_SIZE 42

void	ft_write_file(int fd)
{
	char	dest[BUFFER_SIZE];
	int		size;

	size = 1;
	while (size > 0)
	{
		size = read(fd, dest, BUFFER_SIZE);
		if (size < 0)
		{
			write(STDOUT_FILENO, "Error.\n", 7);
		}
		write(STDOUT_FILENO, dest, size);
	}
}