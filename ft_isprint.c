/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezunec <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:53:43 by sezunec           #+#    #+#             */
/*   Updated: 2023/10/09 19:00:02 by sezunec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int i)
{
	return (i >= ' ' && i <= '~');
}
