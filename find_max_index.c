/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:45:27 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/17 17:25:11 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max_index(t_stack_node *node)
{
	t_stack_node	*temp;
	int				max_number;
	int				max_index;
	int				index;

	temp = node;
	max_index = 0;
	max_number = temp->data;
	index = 0;
	while (temp)
	{
		if (temp->data > max_number)
		{
			max_number = temp->data;
			max_index = index;
		}
		temp = temp->next;
		index++;
	}
	return (max_index);
}
