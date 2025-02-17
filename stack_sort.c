/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 17:30:16 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/17 16:00:19 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void	quick_sort_a(t_stack *stacks, int segment_size);

// Might need to change the last recursive call also
void	quick_sort_b(t_stack *stacks, int segment_size)
{
	int				median;
	int				pushed;
	t_stack_node	*temp;

	pushed = 0;
	temp = stacks->b;
	if (segment_size <= 5)
	{
		sort_five_b(stacks, segment_size);
		return ;
	}
	median = get_median_b(stacks);
	while (pushed < segment_size / 2)
	{
		if (temp->data >= median)
		{
			pa(stacks);
			pushed++;
		}
		else
			temp = temp->next;
	}
	quick_sort_a(stacks, pushed);
	quick_sort_b(stacks, stacks->size_b);
}

// Pushing of elements is wrong
void	quick_sort_a(t_stack *stacks, int segment_size)
{
	int				median;
	int				pushed;

	pushed = 0;
	if (stacks->size_a <= 5)
	{
		sort_five_a(stacks);
		return ;
	}
	median = get_median_a(stacks);
	while (pushed < segment_size / 2)
	{
		if (stacks->a->data < median)
		{
			pb(stacks);
			pushed++;
		}
		else
			ra(stacks, 1);
	}
	quick_sort_a(stacks, stacks->size_a);
	quick_sort_b(stacks, pushed);
	while (pushed)
	{
		pa(stacks);
		pushed--;
	}
}

// void	quick_sort(t_stack *stacks, int segment_size)
// {
// 	int	median;
// 	int	pushed;

// 	pushed = 0;
// 	if (stacks->size_a <= 5)
// 	{
// 		sort_five_a(stacks);
// 		return ;
// 	}
// 	if (stacks->size_b <= 5 && stacks->size_b != 0)
// 	{
// 		sort_five_b(stacks);
// 		return ;
// 	}
// 	median = get_median_a(stacks);
// 	while (pushed < segment_size / 2)
// 	{
// 		if (stacks->a->data < median)
// 		{
// 			pb(stacks);
// 			pushed++;
// 		}
// 	}
// 	quick_sort(stacks, stacks->size_a);
// }

void	stack_sort(t_stack *stacks)
{
	t_segment	segment;

	segment.segment_size = 0;
	if (stacks->size_a == 3)
	{
		sort_three_a(stacks);
		return ;
	}
	if (stacks->size_a <= 5)
	{
		sort_five_a(stacks);
		return ;
	}
	segment.segment_size = stacks->size_a;
	quick_sort_a(stacks, segment.segment_size);
}
