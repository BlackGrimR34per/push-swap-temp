/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_analysis_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:27:40 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/03 19:46:37 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	cost_analysis_a(t_stack *stacks)
{
	int				len_a;
	int				len_b;
	t_stack_node	*temp_a;

	temp_a = stacks->a;
	len_a = stacks->size_a;
	len_b = stacks->size_b;
	while (temp_a)
	{
		temp_a->push_cost = temp_a->index;
		if (!(temp_a->above_median))
			temp_a->push_cost = stacks->size_a - (temp_a->index);
		if (!(temp_a->target_node->above_median))
			temp_a->push_cost += temp_a->target_node->index;
		else
			temp_a->push_cost += stacks->size_b - (temp_a->target_node->index);
		temp_a = temp_a->next;
	}
}
