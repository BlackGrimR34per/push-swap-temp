/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_cheapest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:37:46 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/10 17:30:46 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_cheapest(t_stack *stacks)
{
	t_stack_node	*temp_a;
	t_stack_node	*cheapest_node;
	long			cheapest_cost;

	temp_a = stacks->a;
	cheapest_node = stacks->a;
	cheapest_cost = stacks->a->push_cost;
	while (temp_a)
	{
		if (temp_a->push_cost < cheapest_cost)
		{
			cheapest_node = temp_a;
			cheapest_cost = temp_a->push_cost;
		}
		temp_a = temp_a->next;
	}
	cheapest_node->cheapest = true;
}
