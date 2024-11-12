/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:05:17 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/23 14:46:25 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	trim_l;
	size_t	s1_l;
	size_t	head;
	size_t	tail;

	s1_l = ft_strlen(s1);
	head = 0;
	while (head < s1_l && ft_strchr(set, s1[head]))
	{
		head++;
	}
	tail = s1_l;
	while (tail > head && ft_strchr(set, s1[tail - 1]))
	{
		tail--;
	}
	trim_l = tail - head;
	trim = (char *) ft_calloc(trim_l + 1, sizeof(char));
	if (trim == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(trim, s1 + head, trim_l + 1);
	return (trim);
}
