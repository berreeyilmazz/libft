/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:56:49 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/22 16:05:47 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*thegoodplace;
	int		i;
	int		k;

	if (!s1 || !s2)
		return (NULL);
	thegoodplace = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (thegoodplace == 0)
		return (0);
	i = 0;
	k = 0;
	while (s1[k])
		thegoodplace[i++] = s1[k++];
	k = 0;
	while (s2[k])
		thegoodplace[i++] = s2[k++];
	thegoodplace[i] = 0;
	return (thegoodplace);
}
