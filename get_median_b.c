/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_median_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:29:59 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/23 20:00:11 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_median_b(t_stack *stacks)
{
	int				min;
	int				max;
	t_stack_node	*temp;

	temp = stacks->b;
	min = stacks->b->id;
	while (temp)
	{
		if (temp->id < min)
			min = temp->id;
		temp = temp->next;
	}
	temp = stacks->b;
	max = stacks->b->id;
	while (temp)
	{
		if (temp->id > max)
			max = temp->id;
		temp = temp->next;
	}
	return ((max + min) / 2);
}
