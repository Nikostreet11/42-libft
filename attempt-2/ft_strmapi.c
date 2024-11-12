/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:44:21 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/30 18:16:45 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*d;
	size_t	len;
	size_t	idx;

	len = ft_strlen(s);
	d = (char *) ft_calloc(len + 1, sizeof(char));
	if (!d)
	{
		return (NULL);
	}
	idx = 0;
	while (idx < len)
	{
		d[idx] = f(idx, s[idx]);
		idx++;
	}
	d[idx] = '\0';
	return (d);
}
