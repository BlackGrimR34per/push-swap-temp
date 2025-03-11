/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_reader.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 00:34:54 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/11 17:59:33 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include <stdio.h>

void	instruction_reader(t_stack *stacks)
{
	char	*line;

	line = get_next_line(1);
	while (line)
	{
		instruction_handler(stacks, line);
		free(line);
		line = get_next_line(1);
	}
}
