/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:31:38 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/08 17:43:34 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int	length;

	i = 0;
	length = ft_strlen(dst);
	while (src[i])
	{
		dst[length++] = src[i++];
	}
	dst[length] = 0;
}
