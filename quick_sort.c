/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 23:10:01 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/26 13:44:01 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	partition(int *arr, int start, int end)
{
	int	i;
	int	j;
	int	pivot;

	pivot = arr[end];
	i = start - 1;
	j = start;
	while (j <= end)
	{
		if (arr[j] < pivot)
		{
			i++;
			ft_swap(&arr[i], &arr[j]);
		}
		j++;
	}
	i++;
	ft_swap(&arr[i], &arr[end]);
	return (i);
}

void	quick_sort(int *arr, int start, int end)
{
	int	pivot;

	if (start >= end)
		return ;
	pivot = partition(arr, start, end);
	quick_sort(arr, start, pivot - 1);
	quick_sort(arr, pivot + 1, end);
}

