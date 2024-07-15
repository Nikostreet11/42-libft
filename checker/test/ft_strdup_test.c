/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:09:00 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/15 13:06:31 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int	main(int argc, char *argv[])
{
	char	*test0;
	char	*test1;

	if (argc != 2)
	{
		printf("Error. Usage: s (string)\n");
		return (1);
	}
	test0 = ft_strdup(argv[1]);
	printf("Received: %s\n", test0);
	test1 = strdup(argv[1]);
	printf("Expected: %s\n", test1);
	free(test0);
	free(test1);
	return (0);
}
