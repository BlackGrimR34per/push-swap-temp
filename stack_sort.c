/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 19:29:13 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/10 16:09:38 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_sort(t_stack *stacks)
{
	if (stacks->size_a > 3)
		pb(stacks);
	if (stacks->size_a > 3)
		pb(stacks);
	while (stacks->size_a > 3 && is_unsorted(stacks->a))
	{
		init_a_nodes(stacks);
		move_a_to_b(stacks);
	}
	sort_three(stacks);
	while (stacks->b)
	{
		init_b_nodes(stacks);
		move_b_to_a(stacks);
	}
	current_index(stacks, 'A');
	place_min_on_top(stacks);
}
