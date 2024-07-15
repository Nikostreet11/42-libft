/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:32:59 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/15 12:40:46 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <errno.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		idx;
	int		size;
	char	*d;

	size = ft_strlen(s) + 1;
	d = (char *) malloc(size * sizeof(char));
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