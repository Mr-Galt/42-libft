/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 09:19:22 by mheinke           #+#    #+#             */
/*   Updated: 2023/07/04 13:55:13 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ds;
	char	*sr;

	ds = (char *)dst;
	sr = (char *)src;
	if (sr == ds)
		return (dst);
	if (sr < ds)
	{
		while (len--)
		{
			*(ds + len) = *(sr + len);
		}
		return (dst);
	}
	else
	{
		while (len--)
		{
			*ds++ = *sr++;
		}
	}
	return (dst);
}
