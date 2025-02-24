/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_median_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:29:59 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/24 12:55:20 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_median_segment(t_stack *stacks, t_segment *segment, char stack)
{
	int				min;
	int				max;
	int				count;
	t_stack_node	*current;

	min = INT_MAX;
	max = INT_MIN;
	count = 0;
	current = stacks->b;
	if (stack == 'A')
		current = stacks->a;
	while (count < segment->segment_size && current)
	{
		if (current->id < min)
			min = current->id;
		if (current->id > max)
			max = current->id;
		current = current->next;
		count++;
	}
	segment->min = min;
	segment->max = max;
	return ((max + min) / 2);

}
