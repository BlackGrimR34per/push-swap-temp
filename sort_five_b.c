/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:13:10 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/24 16:30:50 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

void	sort_five_b_helper(t_stack *stacks, int segment_size)
{
	int	max_index;
	int	turn_on;

	if (segment_size == 2 && !is_unsorted(stacks->b))
	{
		sb(stacks, 1);
		return ;
	}
	else if (segment_size == 3)
	{
		sort_three_b(stacks);
		return ;
	}
	turn_on = 1;
	if (segment_size == 4)
		turn_on = 0;
	while (stacks->size_b > 3)
	{
		max_index = find_max_index(stacks->b);
		if (max_index == 0)
			pa(stacks);
		else if (max_index > segment_size / 2)
			rrb(stacks, 1);
		else if (max_index < segment_size / 2)
			ra(stacks, 1);
	}
	sort_three_b(stacks);
	pb(stacks);
	if (turn_on)
		pb(stacks);
}

// Arranges it in descending order so pushing back is easier
void	sort_five_b(t_stack *stacks, int segment_size)
{
	int	extra_elements;
	int	i;

	i = -1;
	extra_elements = stacks->size_b - segment_size;
	while (++i < extra_elements)
	{
		rrb(stacks, 1);
		pa(stacks);
	}
	sort_five_b_helper(stacks, segment_size);
	i = -1;
	while (++i < extra_elements)
	{
		pb(stacks);
		rb(stacks, 1);
	}
}
