/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:14:51 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/08 18:17:30 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	a;

	a = ft_strlen(s);
	while (s[a])
	{
		if (s[a] == c)
			return ((char *)&s[a]);
		a--;
	}
	return (0);
}
