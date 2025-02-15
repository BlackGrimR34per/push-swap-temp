/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:13:10 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/15 14:20:48 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five_a(t_stack *stacks)
{
	int	min_index;

	while (stacks->size_a > 3)
	{
		min_index = find_min_index(stacks);
		if (min_index == 0)
			pb(stacks);
		else if (min_index > stacks->size_a / 2)
			rra(stacks, 1);
		else if (min_index <= stacks->size_a / 2)
			ra(stacks, 1);
	}
	sort_three_a(stacks);
	pa(stacks);
	pa(stacks);
}
