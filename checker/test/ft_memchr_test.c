/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 15:54:32 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/22 16:20:22 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"
#include "libft.h"

int	main(int argc, char **argv)
{
	size_t	n;

	if (argc != 4 || ft_strlen(argv[2]) != 1)
	{
		printf("Error. Usage: s (string), c (char), n (uint)\n");
		return (1);
	}
	n = atoi(argv[3]);
	printf("Received: %p\n", ft_memchr(argv[1], *argv[2], n));
	printf("Expected: %p\n", memchr(argv[1], *argv[2], n));
	return (0);
}
