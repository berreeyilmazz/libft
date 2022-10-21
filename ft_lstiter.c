/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:11:54 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/16 21:33:51 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

void	f(void *a)
{
	int i = 0;
	char *s = (char *)a;
	while(s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
	}
}

int main()
{
	t_list *lst;
	char	*str;
	str = malloc(sizeof(char)*2);
	str = ft_strdup("be0re"); 
	lst = ft_lstnew(str);
	ft_lstiter(lst, &f);
	printf("%s", lst->content);
	return(0);
}