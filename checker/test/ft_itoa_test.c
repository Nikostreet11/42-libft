/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:09:00 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/18 18:59:14 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "utils.h"
#include "libft.h"

int	main(int argc, char *argv[])
{
	char	*str;
	int		num;
	
	if (argc != 2)
	{
		printf("Error. Usage: n (int)\n");
		return (1);
	}
	num = atoi(argv[1]);
	str = ft_itoa(num);
	if (!str)
	{
		printf("Error.");
		return (2);
	}
	printf("Received: %s\n", str);
	free(str);
	return (0);
}
