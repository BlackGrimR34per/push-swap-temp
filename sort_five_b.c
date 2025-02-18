/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:13:10 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/17 19:04:26 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five_b(t_stack *stacks, int segment_size)
{
	int	max_index;
	int	turn_on;

	turn_on = 1;
	if ((segment_size == 2 && is_unsorted(stacks->b)) || segment_size == 1)
		return ;
	if (segment_size == 2 && !is_unsorted(stacks->b))
	{
		sb(stacks, 1);
		return ;
	}
	if (segment_size == 3)
	{
		sort_three_b(stacks);
		return ;
	}
	if (segment_size == 4)
		turn_on = 0;
	while (segment_size > 3)
	{
		max_index = find_max_index(stacks->b);
		if (max_index == 0)
		{
			pa(stacks);
			segment_size--;
		}
		else if (max_index > stacks->size_b / 2)
			rrb(stacks, 1);
		else if (max_index <= stacks->size_b / 2)
			rb(stacks, 1);
	}
	sort_three_b(stacks);
	pb(stacks);
	if (turn_on)
		pb(stacks);
}
