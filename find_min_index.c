/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:45:27 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/14 16:16:16 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_index(t_stack *stack)
{
	t_stack_node	*temp;
	int				min_number;
	int				min_index;
	int				index;

	temp = stack->a;
	min_index = 0;
	min_number = temp->data;
	index = 0;
	while (temp)
	{
		if (temp->data < min_number)
			min_index = index;
		temp = temp->next;
		index++;
	}
	return (min_index);
}
