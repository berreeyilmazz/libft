/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:26:22 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/22 15:54:58 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_check(long n)
{
	if (n < 0)
		return (n * (-1));
	return (n);
}

int	ft_intlen(long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	positive;
	long	size;
	long	real;

	real = n;
	positive = ft_check(real);
	if (real < 0)
		size = ft_intlen(positive) + 2;
	else
		size = ft_intlen(positive) + 1;
	str = malloc(sizeof(char) * size);
	if (!str)
		return (0);
	str[size - 1] = '\0';
	size--;
	while (--size >= 0)
	{
		str[size] = (positive % 10) + 48;
		positive = positive / 10;
		if (size == 0 && real < 0)
			str[0] = '-';
	}
	return (str);
}
