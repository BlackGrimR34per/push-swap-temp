/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cheapest_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 01:32:03 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/20 12:12:24 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*get_cheapest_node(t_stack_node *node)
{
	t_stack_node	*temp;

	if (!node)
		return (NULL);
	temp = node;
	while (temp)
	{
		if (temp->cheapest == true)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}
