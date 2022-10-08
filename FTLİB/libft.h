/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:42:53 by havyilma          #+#    #+#             */
/*   Updated: 2022/10/08 17:54:24 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>

# include <unistd.h>

# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int a);
int		ft_isalnum(int i);
int		ft_isascii(int a);
int		ft_isprint(int i);
int		ft_strlen(const char *m);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int		ft_toupper(int c);



#endif
