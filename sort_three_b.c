/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 23:56:46 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/15 14:17:15 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three_b(t_stack *stacks)
{
	int	nbr_one;
	int	nbr_two;
	int	nbr_three;

	if (stacks->size_b != 3)
		return ;
	nbr_one = stacks->b->data;
	nbr_two = stacks->b->next->data;
	nbr_three = stacks->b->next->next->data;
	if (nbr_one > nbr_two && nbr_two < nbr_three && nbr_one < nbr_three)
		sb(stacks, 1);
	else if (nbr_one < nbr_two && nbr_two > nbr_three && nbr_one > nbr_three)
		rrb(stacks, 1);
	else if (nbr_one > nbr_two && nbr_one > nbr_three && nbr_two < nbr_three)
		rb(stacks, 1);
	else if (nbr_two > nbr_one && nbr_two > nbr_three && nbr_three > nbr_one)
	{
		sb(stacks, 1);
		rb(stacks, 1);
	}
	else if (nbr_one > nbr_two && nbr_two > nbr_three && nbr_one > nbr_three)
	{
		sb(stacks, 1);
		rrb(stacks, 1);
	}
}
