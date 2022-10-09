/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:37:03 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/09 21:34:20 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int i;
    char  *ss1;
    char  *ss2;

    i = 0;
    ss1 = (const char *)s1;
    ss2 = (const char *)s2;
    if (ss1[i] == 0)
        return (0);
    while (ss1[i] && ss2[i] == ss1[i] && ss2[i])
    {
        i++;
    }
    return ((char *)ss1[i] - (char *)ss2[i]);
}
