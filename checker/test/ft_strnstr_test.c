/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:30:50 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/22 16:20:12 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "utils.h"
#include "libft.h"

int	main(int argc, char *argv[])
{
	size_t	n;

	if (argc != 4)
	{
		printf("Error. Usage: s (string), s (string), n (uint)\n");
		return (1);
	}
	n = atoi(argv[3]);
	printf("Received: %p\n", ft_strnstr(argv[1], argv[2], n));
	printf("Expected: %p\n", strnstr(argv[1], argv[2], n));
	return (0);
}
