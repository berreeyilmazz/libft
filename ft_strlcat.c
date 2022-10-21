/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 12:08:52 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/21 16:22:08 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s;
	size_t	d;

	d = 0;
	s = 0;
	if (dstsize == 0 || !src)
		return (0);
	while (dst[d] && (d < dstsize))
		d++;
	while (src[s] && d + s + 1 < dstsize)
	{
		dst[s + d] = src[s];
		s++;
	}
	if (d < dstsize)
		dst[d + s] = '\0';
	return (d + ft_strlen(src));
}

int main()
{
	char *dest = "yes be";
	char *src = "";
	size_t a;
	a = ft_strlcat(dest, src, 0);
	printf("%zu", a);
}

ikisini ard arda yazzdırıp toplamını return ediyor.