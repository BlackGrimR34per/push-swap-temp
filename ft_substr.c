/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 00:18:10 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/11 00:26:23 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*ret;
	int				index;
	unsigned int	length;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	if (start >= length)
		len = 0;
	else if (start + len >= length)
		len = length - start;
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	index = 0;
	while (len--)
		ret[index++] = *(s + start++);
	ret[index] = '\0';
	return (ret);
}
