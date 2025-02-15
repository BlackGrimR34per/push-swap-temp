/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 23:51:42 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/10 23:57:44 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(const char *s1)
{
	int		index;
	char	*dest;
	size_t	length;

	index = -1;
	length = ft_strlen(s1);
	dest = (char *)malloc(sizeof(char) * (length + 1));
	if (!dest)
		return (NULL);
	while (s1[++index])
		dest[index] = s1[index];
	dest[index] = '\0';
	return (dest);
}
