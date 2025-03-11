/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 17:05:28 by ysheraun          #+#    #+#             */
/*   Updated: 2025/03/11 16:18:43 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*gnl_ft_memcpy(void *dst, void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (dst);
	i = -1;
	while (++i < n)
		((char *)dst)[i] = ((char *)src)[i];
	return (dst);
}

char	*gnl_ft_strchr(char *s, int c)
{
	c = (unsigned char)c;
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (NULL);
}

char	*gnl_ft_strdup(char *s1)
{
	int		i;
	char	*dest;
	size_t	length;

	i = -1;
	length = gnl_ft_strlen(s1);
	dest = (char *)malloc((sizeof(char) * length) + 1);
	if (!dest)
		return (NULL);
	while (s1[++i])
		dest[i] = s1[i];
	dest[i] = '\0';
	return (dest);
}

char	*gnl_ft_strjoin(char *s1, char *s2)
{
	char	*ret;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 && *s2)
		return (gnl_ft_strdup(s2));
	if (!s1 || !s2)
		return (NULL);
	len_s1 = gnl_ft_strlen(s1);
	len_s2 = gnl_ft_strlen(s2);
	ret = malloc(sizeof(char) * (len_s1 + len_s2) + 1);
	if (!ret)
	{
		free(s1);
		return (NULL);
	}
	gnl_ft_memcpy(ret, s1, len_s1);
	gnl_ft_memcpy(ret + len_s1, s2, len_s2);
	ret[len_s1 + len_s2] = '\0';
	free(s1);
	return (ret);
}

size_t	gnl_ft_strlen(char *s)
{
	int	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}
