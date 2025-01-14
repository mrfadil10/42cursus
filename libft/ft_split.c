/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoukri <echoukri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:45:48 by echoukri          #+#    #+#             */
/*   Updated: 2022/10/25 18:50:40 by echoukri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
malloc : 
-look for non c character that starts a word
-keep iterating untill the end of it then add a word to the word count
-do it again

algorithm : 
-look for non c character that marks the start of a word
-start counting till a c character is found which marks the end of a word
-knowing the starting and ending indexes we allocate enough space 
for the new word and add it to the array
-keep going till the end of the initial string
-null terminate the array
*/
#include "libft.h"
#include <stdio.h>

static void	*failure_clear(char	**arr)
{
	int	index;

	index = 0;
	while (arr[index])
		free(arr[index++]);
	free(arr);
	return (NULL);
}

static int	count(char const *s, char c)
{
	int	count_of_c;
	int	index;

	count_of_c = 0;
	index = 0;
	while (s[index])
	{	
		if (s[index] != c)
		{
			while (s[index] != c && s[index])
				index++;
			count_of_c++;
		}
		else
			index++;
	}
	return (count_of_c);
}

static char	*make_word(char const *s, int end, char c)
{
	int		start;
	char	*word;

	start = end;
	while (s[end] && s[end] != c)
		end++;
	word = ft_substr(s, start, end - start + 1);
	if (!word)
		return (NULL);
	word[end - start] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		arr_index;
	char	**arr;

	i = 0;
	arr_index = 0;
	arr = malloc((count(s, c)) * sizeof(char *) + 1);
	if (!arr)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			arr[arr_index] = make_word(s, i, c);
			if (arr[arr_index] == NULL)
				return (failure_clear(arr));
			i += ft_strlen(arr[arr_index]);
			arr_index++;
		}
		else
			i++;
	}
	arr[arr_index] = NULL;
	return (arr);
}
