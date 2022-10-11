/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:45:20 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/11 22:54:51 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_row(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if(*s != c && (s[1] == c || s[1] == 0))
			i++;
		s++;
	}
	return (i);
}

int ft_col(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return(i);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		k;

	i = 0;
	if (!s)
		return(NULL);
	tab = (char **)malloc(sizeof(char *) * (ft_row(s, c) + 1));
	if (!tab)
		return(0);
	while (i < ft_row(s, c))
	{
		k = 0;
		tab[i] = (char*) malloc(sizeof(char) * ft_col(s, c) + 1);
		while (*s != c && *s)
			tab[i][k++] = *s++;
		tab[i][k] = 0;
		i++;
	}
	tab[i] = 0;
	return(tab);
}

#include <stdio.h>
int	main()
{
	char **dest;
	dest = ft_split("berre    jgfjh   njhfgj", ' ');
	printf("%s \n %s\n %s", dest[0], dest[1], dest[2]);
}




///

int    ft_row(const char *s, char c)
{
    int    i;

    i = 0;
    while (s[i])
    {
        if(*s != c && (s[1] == c || s[1] == 0))
            i++;
        s++;
    }
    return (i);
}

int ft_col(const char *s, char c)
{
    int    i;

    i = 0;
    while(*s == c)
    {
      *s++;
    }
    while (s[i] != c && s[i])
        i++;
    return(i);
}

char    **ft_split(char const *s, char c)
{
    char    **tab;
    int        i;
    int        k;
    int t;

    i = 0;
    if (!s)
        return(0);
    t = ft_row(s, c) + 1;
    tab = (char **)malloc(sizeof(char *) * t);

    if (!tab)
        return(0);
    while (i < t)
    {
        k = 0;
        tab[i] = (char*) malloc(sizeof(char) * ft_col(s, c) + 1);
        while (*s != c && *s)
        {
            tab[i][k++] = *s++;
        }

        tab[i][k] = 0;
        i++;
    }
    tab[i] = 0;
    return(tab);
}

#include <stdio.h>
int    main()
{
    char **dest;
    dest = ft_split("berre    jgfjh   njhfgj", ' ');
    printf("%s \n %s\n %s", dest[0], dest[1], dest[2]);
}
