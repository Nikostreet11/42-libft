/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:39:55 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/04 12:21:10 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "utils.h"
#include "libft.h"

int	main(int argc, char **argv)
{
	if (argc != 3 || ft_strlen(argv[2]) != 1)
	{
		printf("Error. Usage: s (string), c (char)\n");
		return (1);
	}
	printf("Received: %p\n", ft_strchr(argv[1], *argv[2]));
	printf("Expected: %p\n", strchr(argv[1], *argv[2]));
	return (0);
}
