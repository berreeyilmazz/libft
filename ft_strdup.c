/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:06:34 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/11 01:49:31 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*temp;
	int		length;
	int		i;


	i = 0;
	length = ft_strlen(s1);
	temp = malloc(sizeof(char) * (length + 1));
	if (!temp)
		return (NULL);
	while (s1 && s1[i])
	{
		temp[i] = s1[i];
		i++;
	}
	temp[i] = 0;
	return (temp);
}
