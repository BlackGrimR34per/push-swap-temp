/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_min_on_top.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:05:50 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/10 16:08:50 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	place_min_on_top(t_stack *stacks)
{
	t_stack_node	*smallest_node;

	smallest_node = find_smallest_node(stacks);
	while (stacks->a != smallest_node)
	{
		if (smallest_node->above_median)
			rra(stacks, 1);
		else
			ra(stacks, 1);
	}
}
