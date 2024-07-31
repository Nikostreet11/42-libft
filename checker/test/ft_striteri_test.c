/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:09:00 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/31 11:47:18 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "utils.h"
#include "libft.h"

static void	ft_iter(unsigned int idx, char *c)
{
	*c = *c - 5 + idx % 10;
}

int	main(int argc, char *argv[])
{
	char	*str;
	
	if (argc != 2)
	{
		printf("Error. Usage: s (string)\n");
		return (1);
	}
	str = argv[1];
	ft_striteri(str, ft_iter);
	if (!str)
	{
		printf("Error.");
		return (2);
	}
	printf("Received: %s\n", str);
	return (0);
}
