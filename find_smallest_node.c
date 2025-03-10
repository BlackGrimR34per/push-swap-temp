/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_smallest_node.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:34:31 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/10 16:33:11 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*find_smallest_node(t_stack *stacks)
{
	t_stack_node	*temp_a;
	t_stack_node	*smallest_node;
	long			smallest_value;

	temp_a = stacks->a;
	smallest_node = temp_a;
	smallest_value = temp_a->data;
	while (temp_a)
	{
		if (temp_a->data < smallest_value)
		{
			smallest_node = temp_a;
			smallest_value = temp_a->data;
		}
		temp_a = temp_a->next;
	}
	return (smallest_node);
}
