/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezunec <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:59:59 by sezunec           #+#    #+#             */
/*   Updated: 2023/10/15 13:06:30 by sezunec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_power(long n)
{
	int	res;

	res = 0;
	if (n < 0)
	{
		n = n * -1;
		res++;
	}
	while (n > 0)
	{
		n = n / 10;
		res++;
	}
	return (res);
}

char	*ft_itoa_is_zero(char *res)
{
	res = ft_calloc(sizeof(*res), 2);
	if (res == 0)
		return (NULL);
	res[0] = '0';
	res[1] = '\0';
	return (res);
}

char	*ft_itoa(int n)
{
	size_t		power;
	char		*res;
	long int	nb;

	res = NULL;
	nb = n;
	power = ft_check_power(nb);
	if (n == 0)
		return (ft_itoa_is_zero(res));
	res = ft_calloc(sizeof(*res), power + 1);
	if (res == 0)
		return (NULL);
	res[power--] = '\0';
	if (nb < 0)
	{
		nb = nb * -1;
		res[0] = '-';
	}
	while (nb > 0)
	{
		res[power] = nb % 10 + 48;
		nb = nb / 10;
		power--;
	}
	return (res);
}
