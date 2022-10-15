/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:36:36 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/15 22:11:08 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*area;

	area = malloc(sizeof(t_list));
	if (lst && area)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
	}
}
