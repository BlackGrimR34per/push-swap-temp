/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 00:06:38 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/10 00:07:28 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	sb(t_stack *stacks)
{
	t_stack_node	*temp;

	if (!stacks->b || !stacks->b->next)
		return ;
	temp = stacks->b;
	stacks->b = temp->next;
	temp->prev = stacks->b;
	temp->next = stacks->b->next;
	stacks->b->next = temp;
	stacks->b->prev = NULL;
}
