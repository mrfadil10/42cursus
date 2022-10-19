/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:12:42 by echoukri          #+#    #+#             */
/*   Updated: 2022/10/19 11:22:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	char	buf[2];

	buf[0] = c;
	buf[1] = '\0';
	write(fd, buf, 2);
	return ;
}

// int main()
// {
//     ft_putchar_fd('M', 1);
//     return (0);
// }