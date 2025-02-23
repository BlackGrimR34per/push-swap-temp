/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 17:30:16 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/23 20:44:37 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	stack_sort(t_stack *stacks)
{
	t_segment	segment;

	if (!is_unsorted(stacks->a))
		return ;
	if (stacks->size_a <= 5)
		sort_five_a(stacks);
	else
		sort_a(stacks, stacks->size_a);
}

void	sort_a(t_stack *stacks, int segment_size)
{
	int	median;
	int	pushed;

	if (stacks->size_a <= 5)
	{
		sort_five_a(stacks);
		return ;
	}
	median = get_median_a(stacks);
	pushed = 0;
	while (pushed < segment_size / 2)
	{
		if (stacks->a->id <= median)
		{
			pb(stacks);
			pushed++;
		}
		else
			ra(stacks, 1);
	}
	sort_a(stacks, stacks->size_a);
}

void	sort_b(t_stack *stacks, int segment_size)
{
	int	median;
	int	pushed;

	if (stacks->size_b <= 5)
	{
		sort_five_b(stacks, segment_size);
		return ;
	}
	median = get_median_b(stacks);
	pushed = 0;
	while (pushed < segment_size / 2)
	{
		if (stacks->b->id > median)
		{
			pa(stacks);
			pushed++;
		}
		else
			rb(stacks, 1);
	}
	sort_a(stacks, pushed);
	sort_b(stacks, segment_size - pushed);
}
