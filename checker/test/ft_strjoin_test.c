/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:09:00 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/22 16:25:02 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#include "libft.h"

int	main(int argc, char *argv[])
{
	char	*join;

	if (argc != 3)
	{
		printf("Error. Usage: s1 (string), s2 (string)\n");
		return (1);
	}
	join = ft_strjoin(argv[1], argv[2]);
	printf("Received: %s\n", join);
	free(join);
	return (0);
}
