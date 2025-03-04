/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 20:10:09 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/03 21:46:18 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_a_to_b(t_stack *stacks)
{
	t_stack_node	*cheapest_node;

	cheapest_node = get_cheapest(stacks->a);
	if (cheapest_node->above_median && cheapest_node->target_node->above_median)
		rotate_both(stacks, cheapest_node);
	else if (!cheapest_node->above_median &&
		!cheapest_node->target_node->above_median)
	prep_for_push(stacks, cheapest_node, 'A');
	prep_for_push(stacks, cheapest_node->target_node, 'B');
	pb(stacks);
}