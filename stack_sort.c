/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 21:35:16 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/15 14:15:42 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

// Can the code of is sorted to use node instead of stacks?
void	recursive_sort(t_stack *stacks, t_segment segment_a, t_segment segment_b)
{
	int median;
	int pushed;

	// Base cases
	if (segment_a.segment_size <= 5)
	{
		if (is_unsorted(stacks))
			sort_five_a(stacks);
		return;
	}
	if (segment_b.segment_size <= 5 && segment_b.segment_size != 0)
	{
		sort_five_b(stacks);
		return;
	}
	// Get median of current segment in stack A
	median = get_median_a(stacks);
	pushed = 0;

	// Push smaller elements to B until A has 5 elements
	while (segment_a.segment_size > 5)
	{
		if (stacks->a->data <= median)
		{
			pb(stacks);
			pushed++;
			segment_a.segment_size--;
			segment_b.segment_size++;
		}
		else
			ra(stacks, 1);
	}
	sort_five_a(stacks);
	if (segment_b.segment_size > 5)
	{
		t_segment new_segment_b = {.segment_size = segment_b.segment_size};
		recursive_sort(stacks, (t_segment){.segment_size = 0}, new_segment_b);
	}
	else
		sort_five_b(stacks);
}

void	stack_sort(t_stack *stacks)
{
	t_segment	segment_a;
	t_segment	segment_b;
	int			median;

	if (stacks->size_a == 3)
	{
		sort_three_a(stacks);
		return ;
	}
	if (stacks->size_a == 4 || stacks->size_a == 5)
	{
		sort_five_a(stacks);
		return ;
	}
	segment_a.segment_size = stacks->size_a;
	segment_b.segment_size = stacks->size_b;
	recursive_sort(stacks, segment_a, segment_b);
}
