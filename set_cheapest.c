/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_cheapest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:37:46 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/08 21:27:39 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_cheapest(t_stack *stacks)
{
	t_stack_node	*temp_a;
	t_stack_node	*cheapest_node;
	long			cheapest_value;

	temp_a = stacks->a;
	cheapest_value = stacks->a->data;
	while (temp_a)
	{
		if (temp_a->data < cheapest_value)
		{
			cheapest_node = temp_a;
			cheapest_value = temp_a->data;
		}
		temp_a = temp_a->next;
	}
	cheapest_node->cheapest = true;
}
