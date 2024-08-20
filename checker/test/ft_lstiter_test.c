/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:09:00 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/20 18:24:25 by nipollin         ###   ########.fr       */
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
	ft_lstiter(head, ft_rot13_data);
	write(STDOUT_FILENO, "Received: ", 10);
	ft_write_lst(head);
	write(STDOUT_FILENO, "\n", 1);
	ft_lstclear(&head, free);
	return (0);
}
