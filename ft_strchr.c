/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezunec <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:16:07 by sezunec           #+#    #+#             */
/*   Updated: 2023/10/14 14:49:31 by sezunec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char *)str;
	while (s[i] != (char)c && str[i] != '\0')
		i++;
	if (s[i] == (char)c)
	{
		return (&s[i]);
	}
	return (NULL);
}
