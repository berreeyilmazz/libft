/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:04:38 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/15 15:34:49 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s)
	{
		while(s[i])
		{
			f (i, &s[i]);
			i++;
		}
	}
}
