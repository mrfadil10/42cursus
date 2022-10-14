/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoukri <echoukri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:12:11 by echoukri          #+#    #+#             */
/*   Updated: 2022/10/14 11:12:11 by echoukri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
extern int	ft_atoi(char *str);
extern void	ft_bzero(void *s, size_t n);
extern void    *ft_calloc(size_t count, size_t size);
extern int	ft_isalnum(int c);
extern int	ft_isalpha(int c);
extern int	ft_isascii(int c);
extern int	ft_isdigit(int c);
extern int	ft_isprint(int c);
extern void	ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
extern void	ft_memmove(void *dst, const void *src, size_t len);
extern void	ft_memset(void *b, int c, size_t len);
extern char	*ft_strdup(char *src);
extern void	*ft_strjoin(char const *s1, char const *s2);
extern size_t	ft_strlcat(char *dst, char *src, size_t size);
extern size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
extern int	ft_strlen(const char *s);
extern int	ft_strncmp(char *s1, char *s2, unsigned int n);
extern int	ft_toupper(int c);
extern int	ft_tolower(int c);

#endif