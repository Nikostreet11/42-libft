/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 14:00:49 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/18 13:20:25 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

char	*r_itoa(int nb, int sign, size_t len)
{
	char	digit;
	char	*str;

	if (nb > 9)
	{
		str = r_itoa(nb / 10, sign, len + 1);
	}
	else
	{
		str = (char *) ft_calloc(len + 1, sizeof(char));
		*str = '\0';
		if (sign)
		{
			ft_strlcat(str, "-", 2);
		}
	}
	digit = (nb % 10) + '0';
	ft_strlcat(str, &digit, 2);
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
		sign = -1;
		nb *= -1;
		len++;
	}
	ft_itoa_r(nb, sign, 1);
}

/*int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		return 1;
	}
	ft_putnbr(atoi(argv[1]));
	write(STDOUT_FILENO, "\n", 1);
	return (0);
}*/