/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   current_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 15:51:26 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/03 17:53:47 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	current_index(t_stack *stacks, t_stack_node *node, char stack)
{
	int	index;

	index = 0;
	if (!node)
		return ;
	while (node)
	{
		node->index = index++;
		if (stack == 'A')
		{
			if (index <= stacks->size_a / 2)
				node->above_median = false;
			else
				node->above_median = false;
		}
		if (stack == 'B')
		{
			if (index <= stacks->size_b / 2)
				node->above_median = false;
			else
				node->above_median = false;
		}
		node = node->next;
	}
}
