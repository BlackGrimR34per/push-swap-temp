/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_to_top.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:10:16 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/10 15:15:17 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	node_to_top(t_stack *stacks, t_stack_node *node, char stack)
{
	if (stack == 'A')
	{
		while (stacks->a != node)
		{
			if (node->above_median)
				rra(stacks, 1);
			else
				ra(stacks, 1);
		}
	}
	else
	{
		while (stacks->b != node)
		{
			if (node->above_median)
				rrb(stacks, 1);
			else
				rb(stacks, 1);
		}
	}
}
