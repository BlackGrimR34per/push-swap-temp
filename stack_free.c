/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:01:39 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/07 17:41:45 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	stack_free(t_stack_node *node)
{
	t_stack_node	*temp;

	while (node)
	{
		temp = node->next;
		free(node);
		node = temp;
	}
	return (1);
}
