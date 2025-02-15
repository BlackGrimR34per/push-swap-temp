/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:13:10 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/15 22:21:08 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five_b(t_stack *stacks)
{
	int	min_index;
	int	turn_on;

	turn_on = 1;
	if (stacks->size_b == 3)
	{
		sort_three_b(stacks);
		return ;
	}
	if (stacks->size_b == 4)
		turn_on = 0;
	while (stacks->size_b > 3)
	{
		min_index = find_min_index(stacks);
		if (min_index == 0)
			pa(stacks);
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
