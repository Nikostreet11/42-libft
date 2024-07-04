/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:39:55 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/04 12:19:59 by nipollin         ###   ########.fr       */
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
	size_t	dst_ofs;
	size_t	src_ofs;

	if (argc != 5)
	{
		printf("Error. Usage: src (string), d_ofs (uint), s_ofs (uint), "
			"n (uint)\n");
		return (1);
	}
	ft_strlcpy(test0, argv[1], ft_strlen(argv[1]) + 1);
	ft_strlcpy(test1, argv[1], ft_strlen(argv[1]) + 1);
	dst_ofs = atoi(argv[2]);
	src_ofs = atoi(argv[3]);
	siz = atoi(argv[4]);
	printf("Received: %p\n", ft_memmove(test0 + dst_ofs, test0 + src_ofs, siz));
	printf("%s\n", test0);
	printf("Expected: %p\n", memmove(test1 + dst_ofs, test1 + src_ofs, siz));
	printf("%s\n", test1);
	return (0);
}
