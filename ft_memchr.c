/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:18:25 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/09 21:32:27 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int			i;
	const char	*a;

	a = (const char *)s;
	i = 0;
	n = 0;
	while (a[i])
	{
		if (a[i] == c)
			return ((char *)(s + i));
		i++;
	}
	return (0);
}
