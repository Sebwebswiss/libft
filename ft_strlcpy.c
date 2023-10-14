/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezunec <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:26:17 by sezunec           #+#    #+#             */
/*   Updated: 2023/10/14 14:25:24 by sezunec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = ft_strlen(src);
	if (len < dstsize)
		ft_memcpy((void *)dst, src, len + 1);
	else if (dstsize != 0)
	{
		ft_memcpy((void *)dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (len);
}
