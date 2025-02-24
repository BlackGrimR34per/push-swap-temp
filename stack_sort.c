/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 17:30:16 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/24 16:39:50 by yosherau         ###   ########.fr       */
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
	{
		segment.segment_size = stacks->size_a;
		segment.start = 0;
		segment.stack = 'A';
		get_median_segment(stacks, &segment, 'A');
		sort_a(stacks, &segment);
	}
}

void	sort_a(t_stack *stacks, t_segment *segment)
{
	int			median;
	int			pushed;
	t_segment	new_segment;

	if (segment->segment_size <= 5)
	{
		sort_five_a(stacks);
		return ;
	}
	median = get_median_segment(stacks, segment, 'A');
	pushed = 0;
	new_segment.start = 0;
	new_segment.segment_size = segment->segment_size / 2;
	new_segment.stack = 'B';
	while (pushed < segment->segment_size / 2)
	{
		if (stacks->a->id <= median)
		{
			pb(stacks);
			pushed++;
		}
		else
			ra(stacks, 1);
	}
	segment->segment_size -= pushed;
	sort_a(stacks, segment);
	sort_b(stacks, &new_segment);
	while (pushed--)
		pa(stacks);
}

void	sort_b(t_stack *stacks, t_segment *segment)
{
	int			median;
	int			pushed;
	t_segment	new_segment;

	if (segment->segment_size <= 5)
	{
		sort_five_b(stacks, segment->segment_size);
		return ;
	}
	median = get_median_segment(stacks, segment, 'B');
	pushed = 0;
	new_segment.start = 0;
	new_segment.segment_size = segment->segment_size / 2;
	new_segment.stack = 'A';
	while (pushed < segment->segment_size / 2)
	{
		if (stacks->b->id > median)
		{
			pa(stacks);
			pushed++;
		}
		else
			rb(stacks, 1);
	}
	segment->segment_size -= pushed;
	sort_a(stacks, &new_segment);
	sort_b(stacks, segment);
}
