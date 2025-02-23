/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:13:10 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/23 20:35:01 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Arranges it in descending order so pushing back is easier
void	sort_five_b(t_stack *stacks, int segment_size)
{
	int	max_index;
	int	turn_on;
	int	temp_size;
	int	i;

	temp_size = 0;
	if (stacks->size_b > 5)
		temp_size = stacks->size_b - 5;
	i = 0;
	// Move all elements beyond the first 3 to stack A temporarily
	while (i < temp_size)
	{
		rrb(stacks, 1);  // No output
		pa(stacks);  // No output
		i++;
	}
	turn_on = 1;
	if ((segment_size == 2 && !is_unsorted(stacks->b)) || segment_size == 1)
		return ;
	if (segment_size == 2 && is_unsorted(stacks->b))
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
	i = 0;
	while (i < temp_size)
	{
		pb(stacks);
		rb(stacks, 1);
		i++;
	}
}
