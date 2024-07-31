/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:09:00 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/31 11:33:34 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "utils.h"
#include "libft.h"

static char	ft_map(unsigned int idx, char c)
{
	return (c + - 5 + idx % 10);
}

int	main(int argc, char *argv[])
{
	char	*str;
	
	if (argc != 2)
	{
		printf("Error. Usage: s (string)\n");
		return (1);
	}
	str = ft_strmapi(argv[1], ft_map);
	if (!str)
	{
		printf("Error.");
		return (2);
	}
	printf("Received: %s\n", str);
	free(str);
	return (0);
}
