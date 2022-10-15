/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:30:02 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/15 20:35:51 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*pt;

	pt = malloc (sizeof(t_list));
	if (!pt)
		return (0);
	pt->content = content;
	pt->next = NULL;
	return (pt);
}
