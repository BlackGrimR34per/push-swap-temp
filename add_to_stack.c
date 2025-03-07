/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_to_stacks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 22:54:42 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/07 15:21:40 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_to_stack(t_stack *stacks, int nbr)
{
	t_stack_node	*node;
	t_stack_node	*last_node;

	node = malloc(sizeof(t_stack_node));
	if (!node)
		return ;
	node->data = nbr;
	node->next = NULL;
	if (!stacks->a)
	{
		stacks->a = node;
		node->prev = NULL;
	}
	else
	{
		last_node = ft_lstlast(stacks->a);
		last_node->next = node;
		node->prev = last_node;
	}
	stacks->size_a++;
}
