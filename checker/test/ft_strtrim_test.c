/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:09:00 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/22 16:22:18 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#include "libft.h"

int	main(int argc, char *argv[])
{
	char	*trim;

	if (argc != 3)
	{
		printf("Error. Usage: s1 (string), s2 (string)\n");
		return (1);
	}
	trim = ft_strtrim(argv[1], argv[2]);
	printf("Received: %s\n", trim);
	free(trim);
	return (0);
}
