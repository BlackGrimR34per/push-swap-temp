/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 23:56:46 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/17 14:59:21 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_three_b(t_stack *stacks)
{
	int nbr_one;
	int nbr_two;
	int nbr_three;
	int i;
	int temp_size;

	if (stacks->size_b < 3)
		return;

	nbr_one = stacks->b->data;
	nbr_two = stacks->b->next->data;
	nbr_three = stacks->b->next->next->data;

	// Remember how many elements are in stack B beyond the first 3
	temp_size = stacks->size_b - 3;
	i = 0;
	// Move all elements beyond the first 3 to stack A temporarily
	while (i < temp_size)
	{
		rrb(stacks, 0);  // No output
		pa(stacks);  // No output
		i++;
	}

	// Now sort the 3 elements with the original logic
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

	// Move the elements back from stack A to stack B
	i = 0;
	while (i < temp_size)
	{
		pb(stacks);  // No output
		rb(stacks, 0); // No output
		i++;
	}
}
