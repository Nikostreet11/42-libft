/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:09:00 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/11 17:24:23 by nipollin         ###   ########.fr       */
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
	size_t	idx;
	
	if (argc < 3 || atoi(argv[1]) >= argc - 1)
	{
		printf("Error. Usage: n (uint), x (any), ...\n");
		return (1);
	}
	head = NULL;
	idx = 0;
	while (idx + 2 < (size_t) argc)
	{
		node = ft_lstnew(ft_strdup(argv[idx + 2]));
		ft_lstadd_back(&head, node);
		idx++;
	}
	idx = atoi(argv[1]);
	node = ft_lstget(head, idx);
	ft_lstdelone(node, free);
	write(STDOUT_FILENO, "Received: ", 10);
	ft_write_lst(head);
	write(STDOUT_FILENO, "\n", 1);
	// TODO: free list
	return (0);
}
