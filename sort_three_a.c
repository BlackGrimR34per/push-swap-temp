/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_for_three.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 23:56:46 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/14 17:11:21 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three_a(t_stack *stacks)
{
	int	nbr_one;
	int	nbr_two;
	int	nbr_three;

	nbr_one = stacks->a->data;
	nbr_two = stacks->a->next->data;
	nbr_three = stacks->a->next->next->data;
	if (nbr_one > nbr_two && nbr_two < nbr_three && nbr_one < nbr_three)
		sa(stacks, 1);
	else if (nbr_one < nbr_two && nbr_two > nbr_three && nbr_one > nbr_three)
		rra(stacks, 1);
	else if (nbr_one > nbr_two && nbr_one > nbr_three && nbr_two < nbr_three)
		ra(stacks, 1);
	else if (nbr_two > nbr_one && nbr_two > nbr_three && nbr_three > nbr_one)
	{
		sa(stacks, 1);
		ra(stacks, 1);
	}
	else if (nbr_one > nbr_two && nbr_two > nbr_three && nbr_one > nbr_three)
	{
		sa(stacks, 1);
		rra(stacks, 1);
	}
}
