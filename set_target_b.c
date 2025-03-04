/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_target_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 12:19:52 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/04 15:54:31 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_target_b(t_stack *stacks)
{
	t_stack_node	*temp_a;
	t_stack_node	*temp_b;
	t_stack_node	*target_node;
	long			closest_match;

	temp_b = stacks->b;
	while (temp_b)
	{
		closest_match = LONG_MAX;
		temp_a = stacks->a;
		while (temp_a)
		{
			if (temp_a->data > temp_b->data && temp_a->data < closest_match)
			{
				closest_match = temp_a->data;
				target_node = temp_a;
			}
			temp_a = temp_a->next;
		}
		if (closest_match == LONG_MAX)
			temp_b->target_node = find_min(stacks->a);
		else
			temp_b->target_node = target_node;
		temp_b = temp_b->next;
	}
}
