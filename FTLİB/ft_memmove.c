/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:13:21 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/08 15:07:39 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = (char *)dst;
	s = (const char *)src;
	if (dst == src || len == 0)
		return (dst);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		while (s[--len])
		{
			d[len] = s[len];
		}
	}
	return (dst);
}
