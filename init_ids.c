/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_ids.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 11:29:47 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/02 14:19:07 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	init_ids(t_stack *stacks)
{
	int				*arr;
	int				index;
	t_stack_node	*ptr;

	arr = malloc(sizeof(int) * stacks->size_a);
	if (!arr)
		return ;
	ptr = stacks->a;
	index = 0;
	while (ptr)
	{
		arr[index++] = ptr->data;
		ptr = ptr->next;
	}
	quick_sort(arr, 0, ((stacks->size_a) - 1));
	ptr = stacks->a;
	while (ptr)
	{
		index = 0;
		while (arr[index] != ptr->data)
			index++;
		ptr->id = index;
		ptr = ptr->next;
	}
	free(arr);
}
