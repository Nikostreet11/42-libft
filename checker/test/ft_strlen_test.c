/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:39:55 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/04 12:22:36 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "utils.h"
#include "libft.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error. Usage: s (string)\n");
		return (1);
	}
	printf("Received: %lu\n", ft_strlen(argv[1]));
	printf("Expected: %lu\n", strlen(argv[1]));
	return (0);
}
