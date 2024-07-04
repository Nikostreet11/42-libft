/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:39:55 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/04 12:19:37 by nipollin         ###   ########.fr       */
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
	size_t	siz;
	size_t	d_ofs;
	size_t	s_ofs;

	if (argc != 5)
	{
		printf("Error. Usage: src (string), d_ofs (uint), s_ofs (uint), "
			"n (uint)\n");
		return (1);
	}
	ft_strlcpy(test0, argv[1], ft_strlen(argv[1]) + 1);
	ft_strlcpy(test1, argv[1], ft_strlen(argv[1]) + 1);
	d_ofs = atoi(argv[2]);
	s_ofs = atoi(argv[3]);
	siz = atoi(argv[4]);
	printf("Received: %p\n", ft_memcpy(test0 + d_ofs, argv[1] + s_ofs, siz));
	printf("%s\n", test0);
	printf("Expected: %p\n", memcpy(test1 + d_ofs, argv[1] + s_ofs, siz));
	printf("%s\n", test1);
	return (0);
}
