/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:39:55 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/15 17:45:49 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "utils.h"
#include "libft.h"

int	main(int argc, char **argv)
{
	char	*test0;
	char	*test1;
	size_t	nmemb;
	size_t	size;

	if (argc != 3)
	{
		printf("Error. Usage: nmemb (uint), size (uint)\n");
		return (1);
	}
	nmemb = atoi(argv[1]);
	size = atoi(argv[2]);
	test0 = ft_calloc(nmemb, size);
	write(STDOUT_FILENO, "Received:", 9);
	write(STDOUT_FILENO, "\n", 1);
	ft_write_memory(test0, nmemb * size);
	write(STDOUT_FILENO, "\n", 1);
	test1 = calloc(nmemb, size);
	write(STDOUT_FILENO, "Expected:", 9);
	write(STDOUT_FILENO, "\n", 1);
	ft_write_memory(test1, nmemb * size);
	write(STDOUT_FILENO, "\n", 1);
	free(test0);
	free(test1);
	return (0);
}
