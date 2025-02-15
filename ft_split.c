/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 00:06:24 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/11 20:10:21 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_words(const char *s, char c)
{
	int	word_count;

	if (!*s)
		return (0);
	word_count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c)
			word_count++;
		while (*s != c && *s)
			s++;
	}
	return (word_count);
}

char	**ft_split(const char *s, char c)
{
	char	**output;
	size_t	word_len;
	int		index;

	output = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!output)
		return (NULL);
	index = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			output[index++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	output[index] = NULL;
	return (output);
}
