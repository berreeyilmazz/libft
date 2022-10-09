/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:12:46 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/09 21:16:22 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int check_in(const char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			return 1;
		}
		i++;
	}
	return 0;
}

//_21__hello___
//_2
char	*ft_strtrim(char const *new, char const *set)
{
	int		idx;
	int		len;
	int		setidx;
	char	*res;
	char	*s1;

	if (!new)
	{
		return (NULL);
	}
	if (!set || !*set)
	{
		return ft_strdup(new);
	}

	s1 = (char *)new;
	s1 = ft_strdup(s1);
	idx = 0;
	setidx = 0;
	while (s1[idx])
	{
		if (!check_in(set, s1[idx]))
		{
			break;
		}
		idx++;
	}
	len = ft_strlen(s1) - 1;
	while (s1[len])
	{
		if (!check_in(set, s1[len]))
		{
			break;
		}
		len--;
	}
	s1[len  + 1] = 0;
	res = ft_strdup(s1 + idx);
	free(s1);
	return (res);
}
