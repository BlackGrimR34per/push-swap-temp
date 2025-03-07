/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   current_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 20:11:18 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/07 23:13:36 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	current_index(t_stack *stacks, char stack)
{
	int				index;
	int				median;
	t_stack_node	*temp_stack;

	if (!stack)
		return ;
	index = -1;
	temp_stack = stacks->a;
	median = stacks->size_a / 2;
	if (stack == 'B')
	{
		temp_stack = stacks->b;
		median = stacks->size_b / 2;
	}
	while (temp_stack)
	{
		temp_stack->index = ++index;
		if (index <= median)
			temp_stack->above_median = false;
		else
			temp_stack->above_median = true;
		temp_stack = temp_stack->next;
	}
}
