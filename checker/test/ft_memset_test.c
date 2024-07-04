/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:39:55 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/04 12:20:44 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"
#include "libft.h"

int	main(int argc, char **argv)
{
	char	test0[42];
	char	test1[42];
	size_t	n;

	if (argc != 3 || ft_strlen(argv[1]) != 1)
	{
		printf("Error. Usage: c (char), n (uint)\n");
		return (1);
	}
	n = atoi(argv[2]);
	printf("Received: %p\n", ft_memset(test0, *argv[1], n));
	printf("%.*s\n", (int) n, test0);
	printf("Expected: %p\n", memset(test1, *argv[1], n));
	printf("%.*s\n", (int) n, test1);
	return (0);
}
