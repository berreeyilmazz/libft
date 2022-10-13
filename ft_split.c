/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:45:20 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/13 18:53:15 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_row(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			i++;
		while (*s != c && *s)
			s++;
	}
	return (i);
}

int	ft_col(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		k;
	int		a;

	i = 0;
	if (!s)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (ft_row(s, c) + 1));
	if (!tab)
		return (0);
	a = ft_row(s, c);
	while (i < a)
	{
		k = 0;
		tab[i] = (char*) malloc(sizeof(char) * (ft_col(s, c) + 1));
		while (*s == c)
			s++;
		while (*s != c && *s)
			tab[i][k++] = *s++;
		tab[i][k] = 0;
		i++;
	}
	tab[i] = 0;
	return(tab);
}
