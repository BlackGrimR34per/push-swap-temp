/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_seperator.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 23:48:40 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/11 00:31:19 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**input_seperator(char *argv[])
{
	int		row;
	char	*temp;
	char	*temp_str;
	char	**split_args;

	row = 0;
	temp_str = ft_strdup("");
	while (argv[++row])
	{
		temp = temp_str;
		temp_str = ft_strjoin(temp_str, argv[row]);
		free(temp);
		temp = temp_str;
		temp_str = ft_strjoin(temp_str, " ");
		free(temp);
	}
	split_args = ft_split(temp_str, ' ');
	free(temp_str);
	return (split_args);
}
