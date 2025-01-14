/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoukri <echoukri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:12:42 by echoukri          #+#    #+#             */
/*   Updated: 2022/10/24 14:43:31 by echoukri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	char	buf[1];

	buf[0] = c;
	write(fd, buf, 1);
}

// int main()
// {
//     ft_putchar_fd('M', 1);
//     return (0);
// }