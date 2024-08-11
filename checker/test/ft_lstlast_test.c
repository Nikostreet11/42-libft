/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:09:00 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/11 16:20:02 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "utils.h"
#include "libft.h"

int	main(int argc, char **argv)
{
	t_list	*head;
	t_list	*node;
	t_list	*tail;
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
	tail = ft_lstlast(head);
	write(STDOUT_FILENO, "Received: ", 10);
	ft_write_lst(tail);
	write(STDOUT_FILENO, "\n", 1);
	// TODO: free list
	return (0);
}
