/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 11:58:25 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/17 09:58:46 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	join_s;
	size_t	s1_l;
	size_t	s2_l;

	s1_l = ft_strlen(s1);
	s2_l = ft_strlen(s2);
	join_s = s1_l + s2_l + 1;
	join = (char *) ft_calloc(join_s, sizeof(char));
	if (join == NULL)
	{
		return (NULL);
	}
	join[0] = '\0';
	ft_strlcat(join, s1, join_s);
	ft_strlcat(join, s2, join_s);
	return (join);
}
