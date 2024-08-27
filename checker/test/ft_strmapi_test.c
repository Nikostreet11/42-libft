/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:09:00 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/27 12:29:35 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#include "libft.h"

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
