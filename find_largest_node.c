/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_largest_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:34:31 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/08 22:10:24 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*find_largest_node(t_stack *stacks)
{
	t_stack_node	*temp_b;
	t_stack_node	*largest_node;
	long			largest_value;

	temp_b = stacks->b;
	largest_value = temp_b->data;
	while (temp_b)
	{
		if (temp_b->data > largest_value)
		{
			largest_node = temp_b;
			largest_value = temp_b->data;
		}
		temp_b = temp_b->next;
	}
	return (largest_node);
}
