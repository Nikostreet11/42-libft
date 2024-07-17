/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:32:59 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/17 09:55:23 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		idx;
	int		size;
	char	*d;

	size = ft_strlen(s) + 1;
	d = (char *) ft_calloc(size, sizeof(char));
	if (d == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	idx = 0;
	while (idx < size)
	{
		d[idx] = s[idx];
		idx++;
	}
	return (d);
}