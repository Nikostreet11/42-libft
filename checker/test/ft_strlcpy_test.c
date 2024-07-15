/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:09:00 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/15 13:00:27 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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
	printf("Expected: %lu\n", strlcpy(test1, argv[1], siz));
	printf("%s\n", test1);
	return (0);
}
