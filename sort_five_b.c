/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:13:10 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/17 15:28:54 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five_b(t_stack *stacks, int segment_size)
{
	int	min_index;
	int	turn_on;

	turn_on = 1;
	if (segment_size == 3)
	{
		sort_three_b(stacks);
		return ;
	}
	if (segment_size == 4)
		turn_on = 0;
	while (segment_size > 3)
	{
		min_index = find_min_index(stacks->b);
		if (min_index == 0)
		{
			pa(stacks);
			segment_size--;
		}
		else if (min_index > stacks->size_b / 2)
			rrb(stacks, 1);
		else if (min_index <= stacks->size_b / 2)
			rb(stacks, 1);
	}
	sort_three_b(stacks);
	pb(stacks);
	if (turn_on)
		pb(stacks);
}
