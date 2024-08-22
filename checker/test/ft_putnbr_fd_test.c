/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:09:00 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/22 16:21:11 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "utils.h"
#include "libft.h"

int	main(int argc, char *argv[])
{
	int		fd;

	if (argc != 2)
	{
		printf("Error. Usage: n (int)\n");
		return (1);
	}
	fd = open("util/test.txt", O_RDWR | O_TRUNC);
	if (fd == -1)
	{
		printf("Error.\n");
		return (2);
	}
	ft_putnbr_fd(atoi(argv[1]), fd);
	lseek(fd, 0, SEEK_SET);
	write(STDOUT_FILENO, "Received: ", 10);
	ft_write_file(fd);
	write(STDOUT_FILENO, "\n", 1);
	close(fd);
	return (0);
}
