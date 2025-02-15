/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_unsorted.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 23:54:19 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/15 13:35:48 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_unsorted(t_stack *stacks)
{
	t_stack_node	*temp;

	temp = stacks->a;
	while (temp->next)
	{
		if (temp->data > temp->next->data)
			return (1);
		temp = temp->next;
	}
	return (0);
}
