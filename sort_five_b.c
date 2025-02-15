/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:13:10 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/15 14:06:09 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five_b(t_stack *stacks)
{
	int	min_index;

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
	pb(stacks);
}
