/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:54:02 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/20 19:07:17 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ALPHA_NUM 26
#define DIGIT_NUM 10

#include "utils.h"

static int	ft_mod(int a, unsigned int b)
{
	while (a < 0)
	{
		a += b;
	}
	return (a % b);
}

char	ft_rot(char c, int rot)
{
	unsigned int offset;
	unsigned int size;

	if (ft_isalpha(c))
	{
		size = ALPHA_NUM;
		if ('a' <= c && c <= 'z')
		{
			offset = 'a';
		}
		else
		{
			offset = 'A';
		}
	}
	else if (ft_isdigit(c))
	{
		size = DIGIT_NUM;
		offset = '0';
	}
	else
	{
		return (c);
	}
	return (ft_mod(c - offset + rot, size) + offset);
}

void	ft_rot_str(char *str, int rot)
{
	size_t	len;
	size_t	idx;

	len = ft_strlen(str);
	idx = 0;
	while (idx < len)
	{
		str[idx] = ft_rot(str[idx], rot);
		idx++;
	}
}

void	ft_rot_data(void *data, int rot)
{
	char	*str;

	str = (char *) data;
	ft_rot_str(str, rot);
}

void	ft_rot13_data(void *data)
{
	ft_rot_data(data, 13);
}