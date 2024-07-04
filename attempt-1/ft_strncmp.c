/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:49:05 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/02 15:10:53 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	idx;
	int		value;

	idx = 0;
	value = 0;
	while (idx < n)
	{
		value = s1[idx] - s2[idx];
		if (value || !s1[idx] || !s2[idx])
		{
			return (value);
		}
		idx++;
	}
	return (value);
}

/*int	main(int argc, char *argv[])
{
	int		ret_val;

	if (argc < 4)
	{
		return (1);
	}
	ret_val = ft_strncmp(argv[1], argv[2], atoi(argv[3]));
	printf("Received: %d\n", ret_val);
	ret_val = strncmp(argv[1], argv[2], atoi(argv[3]));
	printf("Expected: %d\n", ret_val);
	return (0);
}*/
