/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_cheapest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:54:18 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/03 20:01:22 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_cheapest(t_stack_node *node)
{
	long			cheapest_value;
	t_stack_node	*cheapest_node;

	if (!node)
		return ;
	cheapest_value = LONG_MAX;
	while (node)
	{
		if (node->push_cost < cheapest_value)
		{
			cheapest_value = node->push_cost;
			cheapest_node = node;
		}
		node = node->next;
	}
	cheapest_node->cheapest = true;
}
