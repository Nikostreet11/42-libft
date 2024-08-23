/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:09:00 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/23 11:35:00 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "libft.h"

int	main(int argc, char *argv[])
{
	char	test0[42];
	char	test1[42];
	int		siz;

	if (argc != 3)
	{
		printf("Error. Usage: src (string), size (uint)\n");
		return (1);
	}
	siz = atoi(argv[2]);
	printf("Received: %lu\n", ft_strlcpy(test0, argv[1], siz));
	printf("%s\n", test0);
	write(STDOUT_FILENO, test0, 15);
	write(STDOUT_FILENO, "\n", 1);
	printf("Expected: %lu\n", strlcpy(test1, argv[1], siz));
	printf("%s\n", test1);
	write(STDOUT_FILENO, test1, 15);
	write(STDOUT_FILENO, "\n", 1);
	return (0);
}
