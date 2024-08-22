/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:09:00 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/22 16:24:53 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "utils.h"
#include "libft.h"

int	main(int argc, char *argv[])
{
	int		fd;

	if (argc != 2)
	{
		printf("Error. Usage: s (string)\n");
		return (1);
	}
	fd = open("util/test.txt", O_RDWR | O_TRUNC);
	if (fd == -1)
	{
		printf("Error.\n");
		return (2);
	}
	ft_putstr_fd(argv[1], fd);
	lseek(fd, 0, SEEK_SET);
	write(STDOUT_FILENO, "Received: ", 10);
	ft_write_file(fd);
	close(fd);
	return (0);
}
