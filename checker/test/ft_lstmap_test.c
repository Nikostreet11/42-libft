/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:09:00 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/22 16:24:24 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "utils.h"
#include "libft.h"

int	main(int argc, char **argv)
{
	t_list	*head;
	t_list	*node;
	t_list	*map;
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
		node = ft_lstnew(ft_strdup(argv[idx + 1]));
		ft_lstadd_back(&head, node);
		idx++;
	}
	map = ft_lstmap(head, ft_rot13dup_data, free);
	write(STDOUT_FILENO, "Received: ", 10);
	ft_write_lst(map);
	write(STDOUT_FILENO, "\n", 1);
	ft_lstclear(&head, free);
	ft_lstclear(&map, free);
	return (0);
}
