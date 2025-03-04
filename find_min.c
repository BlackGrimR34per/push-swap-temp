/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:45:27 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/04 15:24:46 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*find_min(t_stack_node *node)
{
	t_stack_node	*temp;
	t_stack_node	*min_node;
	int				index;

	temp = node;
	min_node = node;
	while (temp)
	{
		if (temp->data < min_node->data)
			min_node = temp;
		temp = temp->next;
	}
	return (min_node);
}
