/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_median.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:29:59 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/14 17:17:00 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Sorting array would take a long
int	get_median_a(t_stack *stacks)
{
	int				*arr;
	t_stack_node	*current;
	int				i;
	int				median;

	arr = malloc(sizeof(int) * stacks->size_a);
	if (!arr)
		return (0);
	current = stacks->a;
	i = 0;
	while (current)
	{
		arr[i++] = current->data;
		current = current->next;
	}
	sort_array(arr, stacks->size_a);
	median = arr[stacks->size_a / 2];
	free(arr);
	return (median);
}
