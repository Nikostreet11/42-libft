/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:09:00 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/31 18:26:05 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "utils.h"
#include "libft.h"

int	main(int argc, char *argv[])
{
	char	c;
	char	dest;
	int		fd;
	
	if (argc != 2 || ft_strlen(argv[1]) != 1)
	{
		printf("Error. Usage: c (char)\n");
		return (1);
	}
	c = *argv[1];
	fd = open("util/test.txt", O_RDWR);
	if (fd == -1)
	{
		printf("Error.\n");
		return (2);
	}
	ft_putchar_fd(c, fd);
	lseek(fd, 0, SEEK_SET);
	read(fd, &dest, 1);
	printf("Received: %c\n", dest);
	close(fd);
	return (0);
}
