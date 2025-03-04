/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 17:30:16 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/04 14:54:52 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_sort(t_stack *stacks)
{
	while (stacks->size_a > 3 && is_unsorted(stacks))
	{
		init_a_nodes(stacks);
		move_a_to_b(stacks->a, stacks->b);
	}
	sort_three_a(stacks);
	while (stacks->b)
	{
		init_b_nodes();
		move_b_to_a(stacks);
	}
	current_index(stacks, stacks->a, 'A');
	min_on_top();
}
