/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:59:06 by atok              #+#    #+#             */
/*   Updated: 2023/05/30 20:25:13 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

//# include <stdio.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdint.h> //

# define SORTER 0
# define CHECKER 1

typedef struct s_node
{
	int				index;
	long int		data;
	struct s_node	*next;
	struct s_node	*prev;
}t_node;

typedef struct s_stack
{
	t_node	*stack_a;
	t_node	*stack_b;
	int		counter_a;
	int		counter_b;
	int		type;
}t_stack;

void	ft_check_max(long int num);
void	ft_check_param(char *str);
void	ft_add_nodes_to_stack_a(t_stack *stack, int num);
void	ft_check_duplicate(t_stack *stack, long int num);
void	ft_index(t_stack *stack);

void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack);
void	pa(t_stack *stack);
void	pb(t_stack *stack);
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stack);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stack);

void	sort_big(t_stack *stack);
int		ft_sorted(t_node *stack);

void	input(t_stack *stack);
void	do_op(t_stack *stack, char *str);
int		ft_strcmp(const char *s1, const char *s2);
long	ft_atoi(const char *str);

//GNL + utils
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
size_t	ft_strlen(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *src);
char	*ft_strjoin(char const *s1, char const *s2);

#endif