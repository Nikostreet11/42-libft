/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 14:00:49 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/26 13:29:12 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

static size_t	ft_strccat(char *dest, const char c)
{
	size_t	idx;

	idx = 0;
	while (dest[idx])
	{
		idx++;
	}
	dest[idx] = c;
	dest[idx + 1] = '\0';
	return (idx + 1);
}

static void	ft_itoa_init(char *str, int sign)
{
	*str = '\0';
	if (sign == -1)
	{
		ft_strccat(str, '-');
	}
}

char	*ft_itoa_r(int num, int sign, size_t len)
{
	char	digit;
	char	*str;

	if (num > 9)
	{
		str = ft_itoa_r(num / 10, sign, len + 1);
		if (!str)
		{
			return (NULL);
		}
	}
	else
	{
		str = (char *) ft_calloc(len + 1, sizeof(char));
		if (!str)
		{
			return (NULL);
		}
		ft_itoa_init(str, sign);
	}
	digit = (num % 10) + '0';
	ft_strccat(str, digit);
	return (str);
}

char	*ft_itoa(int nb)
{
	int	sign;
	int	len;

	if (nb == INT_MIN)
	{
		return (ft_strdup("-2147483648"));
	}
	sign = 1;
	len = 0;
	if (nb < 0)
	{
		sign *= -1;
		nb *= -1;
		len++;
	}
	return (ft_itoa_r(nb, sign, len + 1));
}
