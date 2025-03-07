/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 20:52:21 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/07 15:38:35 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	repeat(t_stack *stacks, int nbr)
{
	t_stack_node	*temp;

	if (!stacks->a)
		return (0);
	temp = stacks->a;
	while (temp)
	{
		if (nbr == temp->data)
			return (1);
		temp = temp->next;
	}
	return (0);
}
