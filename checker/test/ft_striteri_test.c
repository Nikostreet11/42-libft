/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:09:00 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/27 12:29:33 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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
	str = argv[1];
	ft_striteri(str, ft_iter);
	printf("Received: %s\n", str);
	return (0);
}
