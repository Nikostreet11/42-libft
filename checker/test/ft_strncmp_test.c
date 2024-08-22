/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:39:55 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/22 16:24:35 by nipollin         ###   ########.fr       */
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

	if (argc != 4)
	{
		printf("Error. Usage: s1 (string), s2 (string), n (uint)\n");
		return (1);
	}
	n = atoi(argv[3]);
	printf("Received: %d\n", ft_strncmp(argv[1], argv[2], n));
	printf("Expected: %d\n", strncmp(argv[1], argv[2], n));
	return (0);
}
