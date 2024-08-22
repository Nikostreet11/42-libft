/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:09:00 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/22 16:23:39 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#include "libft.h"

int	main(int argc, char **argv)
{
	t_list	*head;
	t_list	*node;
	size_t	idx;

	if (argc < 1)
	{
		printf("Error.\n");
		return (1);
	}
	head = NULL;
	idx = 0;
	while (idx + 1 < (size_t) argc)
	{
		node = ft_lstnew(argv[idx + 1]);
		ft_lstadd_front(&head, node);
		idx++;
	}
	printf("Received: %d\n", ft_lstsize(head));
	ft_lstclear(&head, free);
	return (0);
}
