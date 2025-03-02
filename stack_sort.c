/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 17:30:16 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/02 12:47:19 by yosherau         ###   ########.fr       */
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

void	sort_small_segment_a(t_stack *stacks, t_segment *segment)
{
	int	extra;
	int	i;

	extra = stacks->size_a - segment->segment_size;
	i = -1;
	while (++i < extra)
	{
		rra(stacks, 1);
		pb(stacks);
	}
	sort_five_a(stacks);
	i = -1;
	while (++i < extra)
	{
		pa(stacks);
		ra(stacks, 1);
	}
}

void	sort_small_segment_b(t_stack *stacks, t_segment *segment)
{
	int	extra;
	int	i;

	i = -1;
	extra = stacks->size_b - segment->segment_size;
	while (++i < extra)
	{
		rrb(stacks, 1);
		pa(stacks);
	}
	sort_five_b(stacks, segment->segment_size);
	i = -1;
	while (++i < extra)
	{
		pb(stacks);
		rb(stacks, 1);
	}
}

void	sort_a(t_stack *stacks, t_segment *segment)
{
	int			median;
	int			pushed;
	int			half_pushed;
	int			target;
	t_segment	new_segment;

	if (segment->segment_size <= 5)
	{
		sort_small_segment_a(stacks, segment);
		return ;
	}
	median = get_median_segment(stacks, segment, 'A');
	pushed = 0;
	target = (segment->segment_size + 1) / 2;
	new_segment.start = 0;
	new_segment.segment_size = target;
	new_segment.stack = 'B';
	while (pushed < target)
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
	half_pushed = pushed / 2;
	while (pushed--)
		pa(stacks);
}

void	sort_b(t_stack *stacks, t_segment *segment)
{
	int			median;
	int			pushed;
	int			target;
	int			rotated;
	t_segment	new_segment;

	if (segment->segment_size <= 5)
	{
		sort_small_segment_b(stacks, segment);
		return ;
	}
	rotated = 0;
	median = get_median_segment(stacks, segment, 'B');
	target = (segment->segment_size / 2);
	pushed = 0;
	new_segment.start = 0;
	new_segment.segment_size = segment->segment_size / 2;
	new_segment.stack = 'A';
	while (pushed < target)
	{
		if (stacks->b->id > median)
		{
			pa(stacks);
			pushed++;
		}
		else
		{
			rb(stacks, 1);
			rotated++;
		}
	}
	segment->segment_size -= pushed;
	sort_a(stacks, &new_segment);
	while (rotated--)
		rrb(stacks, 1);
	sort_b(stacks, segment);
}
