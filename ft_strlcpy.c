/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:31:38 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/11 00:25:23 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;

	srclen = ft_strlen(src);
	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < dstsize - 1 && dstsize)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
return (srclen);
}
