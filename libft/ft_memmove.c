/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoukri <echoukri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:47:38 by echoukri          #+#    #+#             */
/*   Updated: 2022/10/24 18:33:21 by echoukri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
knowing that we cannot allocate heap memory nor 
have variable size arrays to make a temporary array
to hold the bytes to accomodate 
for the event the two buffers overlap
the implemented algorithm will be such as:


if the address of dst points to bytes that come after the address that src points
the copying of characters will be from back to front
if the address of src points to bytes that come after the address that dst points
the copying of characters will be from front to back
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	index;

	if (dst < src)
	{
		index = 0;
		while (index < len)
		{
			*((unsigned char *)dst + index) = *((unsigned char *)src + index);
			index++;
		}
	}
	else if (src < dst)
	{
		while (len)
		{
			*((unsigned char *) dst + len - 1) = *((unsigned char *) src
					+ len - 1);
			len--;
		}
	}
	return (dst);
}
