/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:30:50 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/22 16:24:10 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#include "libft.h"

int	main(int argc, char *argv[])
{
	size_t	start;
	size_t	len;
	char	*sub;

	if (argc != 4)
	{
		printf("Error. Usage: s (string), start (uint), len (uint)\n");
		return (1);
	}
	start = atoi(argv[2]);
	len = atoi(argv[3]);
	sub = ft_substr(argv[1], start, len);
	printf("Received: %s\n", sub);
	free(sub);
	return (0);
}
