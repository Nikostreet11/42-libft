/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:39:55 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/04 12:17:41 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "utils.h"
#include "libft.h"

int	main(int argc, char **argv)
{
	if (argc != 2 || ft_strlen(argv[1]) != 1)
	{
		printf("Error. Usage: c (char)\n");
		return (1);
	}
	printf("Received: %d\n", ft_isalpha(*argv[1]));
	printf("Expected: %d\n", isalpha(*argv[1]));
	return (0);
}