/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_median_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:29:59 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/14 17:18:44 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Sorting array would take a long
int	get_median_b(t_stack *stacks)
{
	int				*arr;
	t_stack_node	*current;
	int				i;
	int				median;

	arr = malloc(sizeof(int) * stacks->size_b);
	if (!arr)
		return (0);
	current = stacks->b;
	i = 0;
	while (current)
	{
		arr[i++] = current->data;
		current = current->next;
	}
	sort_array(arr, stacks->size_b);
	median = arr[stacks->size_b / 2];
	free(arr);
	return (median);
}
