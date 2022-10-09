/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:34:13 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/09 15:35:37 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;

    i = 0;
if (s1[i] == 0)
        return (0);
    while (s1[i] && s2[i] == s1[i] && s2[i])
    {
        i++;
    }
    return (s1[i] - s2[i]);
}
