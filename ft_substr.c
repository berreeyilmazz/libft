/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:25:25 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/09 19:01:43 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	int		i;
	char	*str;

	i = 0;
	a = malloc(sizeof(int) * (len + 1));
	if (a == 0)
		return (0);
	while (s[start] && len != 0)
	{
		a[i] = s[start];
		i++;
		start++;
		len--;
	}
	a[i] = 0;
	return (a);
}
