/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_target_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 17:55:06 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/03 18:19:38 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_target_a(t_stack_node *a, t_stack_node *b)
{
	t_stack_node	*temp_b;
	t_stack_node	*target_node;
	long			closest_match;

	while (a)
	{
		closest_match = LONG_MIN;
		temp_b = b;
		while (temp_b)
		{
			if (temp_b->data < a->data && temp_b->data < closest_match)
			{
				closest_match = temp_b->data;
				target_node = temp_b;
			}
			temp_b = temp_b->next;
		}
		if (closest_match == LONG_MIN)
			a->target_node = find_max(b);
		else
			a->target_node = target_node;
		a = a->next;
	}
}
