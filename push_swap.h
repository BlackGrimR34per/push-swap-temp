/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 23:40:16 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/11 00:44:12 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <unistd.h>
# include <limits.h>
# include <stdlib.h>

typedef struct s_stack_node
{
	int					data;
	int					index;
	int					push_cost;
	bool				above_median;
	bool				cheapest;
	struct s_stack_node	*target_node;
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

void			add_to_stack(t_stack *stacks, int nbr);
int				check_input(char *argv[]);
void			cost_analysis_a(t_stack *stacks);
void			current_index(t_stack *stacks, char stack);
t_stack_node	*find_largest_node(t_stack *stacks);
t_stack_node	*find_smallest_node(t_stack *stacks);
long			ft_atol(const char *str);
int				ft_isdigit(char c);
t_stack_node	*ft_lstlast(t_stack_node *node);
char			**ft_split(const char *s, char c);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *s1);
char			*ft_strjoin(const char *s1, const char *s2);
size_t			ft_strlen(const char *s);
char			*ft_substr(const char *s, unsigned int start, size_t len);
t_stack_node	*get_cheapest_node(t_stack_node *node);
void			init_a_nodes(t_stack *stacks);
void			init_b_nodes(t_stack *stacks);
int				input_free(char *argv[], int error);
char			**input_seperator(char *argv[]);
int				is_unsorted(t_stack_node *node);
void			move_a_to_b(t_stack *stacks);
void			move_b_to_a(t_stack *stacks);
void			node_to_top(t_stack *stacks, t_stack_node *node, char stack);
void			pa(t_stack	*stacks, int to_print);
void			pb(t_stack	*stacks, int to_print);
void			place_min_on_top(t_stack *stacks);
void			ra(t_stack *stacks, int to_print);
void			rb(t_stack *stacks, int to_print);
int				repeat(t_stack *stacks, int nbr);
void			rotate_stacks(t_stack *stacks, t_stack_node *cheapest_node);
void			rr(t_stack *stacks, int to_print);
void			rra(t_stack *stacks, int to_print);
void			rrb(t_stack *stacks, int to_print);
void			rrotate_stacks(t_stack *stacks, t_stack_node *cheapest_node);
void			rrr(t_stack *stacks, int to_print);
void			sa(t_stack *stacks, int to_print);
void			sb(t_stack *stacks, int to_print);
void			set_a_target(t_stack *stacks);
void			set_b_target(t_stack *stacks);
void			set_cheapest(t_stack *stacks);
void			sort_three(t_stack *stacks);
void			ss(t_stack *stacks, int to_print);
int				stack_free(t_stack_node *node, int error);
int				stack_init(t_stack *stacks, char *argv[]);
void			stack_sort(t_stack *stacks);
int				write_error(void);

#endif