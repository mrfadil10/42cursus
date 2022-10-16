/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoukri <echoukri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:59:07 by echoukri          #+#    #+#             */
/*   Updated: 2022/10/14 16:30:28 by echoukri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void   *ft_memchr(const void *s, int c, size_t n)
{
    int index;
    unsigned char ci;

    ci = (unsigned char) c;
    index = 0;
    while(s[index] && index<n)
    {
        if (s[index] == ci)
            return s+index;
        index++;
    }
    return (NULL);
}