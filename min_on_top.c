/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_on_top.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:55:08 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/04 15:34:07 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	min_on_top(t_stack *stacks)
{
	while (stacks->a->data != find_min(stacks->a)->data)
	{
		if (find_min(stacks->a)->above_median)
			ra(stacks, 1);
		else
			rra(stacks, 1);
	}
}