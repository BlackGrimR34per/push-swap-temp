/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:13:10 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/24 16:20:38 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five_a(t_stack *stacks)
{
	int	min_index;
	int	turn_on;

	turn_on = 1;
	if (stacks->size_a == 3)
	{
		sort_three_a(stacks);
		return ;
	}
	if (stacks->size_a == 4)
		turn_on = 0;
	while (stacks->size_a > 3)
	{
		min_index = find_min_index(stacks->a);
		if (min_index == 0)
			pb(stacks);
		else if (min_index > stacks->size_a / 2)
			rra(stacks, 1);
		else if (min_index <= stacks->size_a / 2)
			ra(stacks, 1);
	}
	sort_three_a(stacks);
	pa(stacks);
	if (turn_on)
		pa(stacks);
}
