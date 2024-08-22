/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_strstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:08:39 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/22 16:13:35 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "utils.h"
#include "libft.h"

void	ft_write_strstr(char **strstr)
{
	char	*str;
	int		idx;

	idx = 0;
	while (strstr[idx])
	{
		str = strstr[idx];
		write(STDOUT_FILENO, str, ft_strlen(str));
		write(STDOUT_FILENO, "\n", 1);
		idx++;
	}
}
