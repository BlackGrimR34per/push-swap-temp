/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prep_for_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:39:34 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/03 21:44:43 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	prep_for_push(t_stack *stacks, t_stack_node *node, char stack)
{
	if (stack == 'A')
	{
		while (stacks->a != node)
		{
			if (node->above_median)
				ra(stacks, 1);
			else
				rra(stacks, 1);
		}
	}
	else
	{
		while (stacks->b != node)
		{
			if (node->above_median)
				rb(stacks, 1);
			else
				rrb(stacks, 1);
		}
	}
}
