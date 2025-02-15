/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 00:00:00 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/11 00:04:12 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		index;
	char	*ret;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	ret = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!ret)
		return (NULL);
	index = 0;
	while (*s1 || *s2)
	{
		if (*s1)
			ret[index++] = *s1++;
		else
			ret[index++] = *s2++;
	}
	ret[index] = '\0';
	return (ret);
}