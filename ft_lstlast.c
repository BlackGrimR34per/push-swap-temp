/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:23:35 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/11 23:50:18 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*ft_lstlast(t_stack *stacks)
{
	t_stack_node	*temp;

	if (!stacks->a)
		return (NULL);
	temp = stacks->a;
	while (temp->next)
		temp = temp->next;
	return (temp);
}
