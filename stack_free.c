/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:01:39 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/10 22:23:40 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_free(t_stack_node *node, int error)
{
	t_stack_node	*temp;

	while (node)
	{
		temp = node->next;
		free(node);
		node = temp;
	}
	if (error)
		return (1);
	return (0);
}
