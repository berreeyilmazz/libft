/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:37:03 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/11 00:49:45 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t              i;
    const unsigned char *ss1;
    const unsigned char *ss2;

    i = 0;
    ss1 = (const unsigned char *)s1;
    ss2 = (const unsigned char *)s2;
    while (i < n)
    {
        if (ss1[i] != ss2[i])
            return (ss1[i] - ss2[i]);
        i++;
    }
    return (0);
}
