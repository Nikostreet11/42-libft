/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:09:00 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/31 19:22:31 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "utils.h"
#include "libft.h"

int	main(int argc, char *argv[])
{
	char	**split;
	
	if (argc != 3 || ft_strlen(argv[2]) != 1)
	{
		printf("Error. Usage: s (string), c (char)\n");
		return (1);
	}
	split = ft_split(argv[1], *argv[2]);
	if (!split)
	{
		printf("Error.");
		return (2);
	}
	write(STDOUT_FILENO, "Received:\n", 10);
	ft_write_strstr(split);
	ft_free_strstr(split, ft_strstrlen(split));
	return (0);
}
