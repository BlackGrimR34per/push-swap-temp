/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_unsorted.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 17:56:11 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/07 18:08:51 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_unsorted(t_stack_node *node)
{
	while (node->next)
	{
		if (node->data > node->next->data)
			return (1);
		node = node->next;
	}
	return (0);
}
