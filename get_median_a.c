/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_median_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:29:59 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/23 18:10:48 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Sorting array would take a long
int	get_median_a(t_stack *stacks)
{
	int				min;
	int				max;
	t_stack_node	*temp;

	temp = stacks->a;
	min = stacks->a->id;
	while (temp)
	{
		if (temp->id < min)
			min = temp->id;
		temp = temp->next;
	}
	temp = stacks->a;
	max = stacks->a->id;
	while (temp)
	{
		if (temp->id > max)
			max = temp->id;
		temp = temp->next;
	}
	return ((max + min) / 2);
}
