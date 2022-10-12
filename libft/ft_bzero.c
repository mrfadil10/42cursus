/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoukri <echoukri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:14:56 by echoukri          #+#    #+#             */
/*   Updated: 2022/10/12 16:54:30 by echoukri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
void    ft_bzero(void *s, size_t n)
{
    unsigned int index;
    unsigned char *ptr;

    ptr=(char *)s;
    index = 0;
    while (index<n)
    {
        *(ptr+index)='\0';
        index++;
    }
}