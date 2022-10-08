/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:54:20 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/08 15:11:39 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*p;
	const char	*s;
	int			i;

	p = (char *)dst;
	s = (const char *)src;
	i = 0;
	while (i < n)
	{
		p[i] = s[i];
		i++;
	}
}
