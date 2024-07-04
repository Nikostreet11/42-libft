/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:39:55 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/04 12:14:19 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <strings.h>
#include "utils.h"
#include "libft.h"

int	main(int argc, char **argv)
{
	char	test0[42];
	char	test1[42];
	size_t	n;

	if (argc != 2)
	{
		printf("Error. Usage: n (uint)\n");
		return (1);
	}
	n = atoi(argv[1]);
	ft_bzero(test0, n);
	write(STDOUT_FILENO, "Received:", 9);
	write(STDOUT_FILENO, "\n", 1);
	write(STDOUT_FILENO, test0, n);
	write(STDOUT_FILENO, "\n", 1);
	ft_bzero(test1, n);
	write(STDOUT_FILENO, "Expected:", 9);
	write(STDOUT_FILENO, "\n", 1);
	write(STDOUT_FILENO, test1, n);
	write(STDOUT_FILENO, "\n", 1);
	return (0);
}
