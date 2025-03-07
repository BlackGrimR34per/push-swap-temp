/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:01:39 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/07 17:13:54 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	stack_free(t_stack_node *node)
{
	t_stack_node	*temp;

	temp = node->next;
	while (temp)
	{
		free(node);
		node = temp;
		temp = temp->next;
	}
	return (1);
}
