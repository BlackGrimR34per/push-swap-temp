/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 01:30:14 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/11 00:45:07 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_a_to_b(t_stack *stacks)
{
	t_stack_node	*cheapest_node;

	cheapest_node = get_cheapest_node(stacks->a);
	if (cheapest_node->above_median && cheapest_node->target_node->above_median)
		rrotate_stacks(stacks, cheapest_node);
	else if (!cheapest_node->above_median
		&& !cheapest_node->target_node->above_median)
		rotate_stacks(stacks, cheapest_node);
	node_to_top(stacks, cheapest_node, 'A');
	node_to_top(stacks, cheapest_node->target_node, 'B');
	pb(stacks, 1);
}
