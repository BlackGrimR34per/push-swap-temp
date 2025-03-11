/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 17:05:47 by ysheraun          #+#    #+#             */
/*   Updated: 2025/03/11 16:18:06 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifdef __linux__
#  define OPEN_MAX 1024
# elif __APPLE__
#  include <limits.h>
# endif

# define NEWLINE '\n'

# include <stdlib.h>
# include <unistd.h>

void	*gnl_ft_memcpy(void *dst, void *src, size_t n);
char	*gnl_ft_strchr(char *s, int c);
char	*gnl_ft_strdup(char *s1);
char	*gnl_ft_strjoin(char *s1, char *s2);
size_t	gnl_ft_strlen(char *s);
char	*get_next_line(int fd);

#endif