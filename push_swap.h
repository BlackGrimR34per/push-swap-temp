/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 23:39:54 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/24 13:31:41 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_segment
{
	int		segment_size;
	int		start;
	int		min;
	int		max;
	char	stack;
}	t_segment;

typedef struct s_stack_node
{
	int					id;
	int					data;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;

typedef struct s_stack
{
	t_stack_node	*a;
	t_stack_node	*b;
	int				size_a;
	int				size_b;
}	t_stack;

void	add_to_stack(t_stack *stacks, int nbr);
int		check_input(char *argv[]);
long	ft_atol(const char *str);
int		ft_isdigit(char c);
t_stack_node	*ft_lstlast(t_stack_node *node);
char	**ft_split(const char *s, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	**input_seperator(char *argv[]);
int		is_unsorted(t_stack_node *node);
int		write_error(void);
char	*ft_strjoin(const char *s1, const char *s2);
int		check_input(char *argv[]);
int		input_free(char *argv[]);
int		repeat(t_stack *stacks, int nbr);
void	stack_init(t_stack *stacks, char *argv[]);

// void	stack_sort(t_stack *stacks);
void	sa(t_stack *stacks, int to_print);
void	sb(t_stack *stacks, int to_print);
void	ss(t_stack *stacks);
void	ra(t_stack *stacks, int to_print);
void	rb(t_stack *stacks, int to_print);
void	rr(t_stack *stacks);
void	rra(t_stack *stacks, int to_print);
void	rrb(t_stack *stacks, int to_print);
void	rrr(t_stack *stacks);
void	pa(t_stack *stacks);
void	pb(t_stack *stacks);

void	stack_sort(t_stack *stacks);
void	sort_three_a(t_stack *stacks);
void	sort_three_b(t_stack *stacks);
void	sort_five_a(t_stack *stacks);
void	sort_five_b(t_stack *stacks, int segment_size);
int		find_min_index(t_stack_node *node);
int		find_max_index(t_stack_node *node);

int		get_median_segment(t_stack *stacks, t_segment *segment, char stack);
void	sort_array(int *arr, int size);

void	quick_sort(int *arr, int start, int end);
void	init_ids(t_stack *stacks);

void	sort_a(t_stack *stacks, t_segment *segment);
void	sort_b(t_stack *stacks, t_segment *segment);

#endif