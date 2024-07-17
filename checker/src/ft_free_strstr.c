/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_strstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:08:39 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/17 13:25:29 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "utils.h"

char	**ft_free_strstr(char **str, size_t len)
{
	size_t	idx;

	idx = 0;
	while (idx < len)
	{
		free(str[idx]);
		idx++;
	}
	free(str);
	return (NULL);
}