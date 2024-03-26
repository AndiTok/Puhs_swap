/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:49:36 by atok              #+#    #+#             */
/*   Updated: 2023/03/18 18:04:01 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void sa(t_stack *stack) // when only moving the data
// {
// 	long int	t;
// 	int			i;
// 	t_node		*stack_a;
// 	stack_a = stack->stack_a;
// 	if (stack_a->next == NULL || stack_a == NULL)
// 		return;
// 	t = stack_a->data;
// 	stack_a->data = stack_a->next->data;
// 	stack_a->next->data = t;
// 	i = stack_a->index;
// 	stack_a->index = stack_a->next->index;
// 	stack_a->next->index = i;
// }
/* void sb(t_stack *stack) // swap B1 with B2
{
	t_node		*first;
	t_node		*second;
	t_node		*third;

	if (stack->stack_b == NULL|| stack->stack_b->next == NULL) 
		return;
	// if there is no node or only 1 node
	first = stack->stack_b;
	second = stack->stack_b->next;
	third = second->next;
	first->next = second->next; // N1 -> N3
	first->prev = second; // N1 -> N2
	if (third != NULL) // if there is a 3rd node
		third->prev = first; // N3 -> N1
	second->prev = NULL; // N2 -> NULL
	second->next = first;// N2 -> N1
	stack->stack_b = second; // N2 becomes N1
	write(1, "rb\n", 3);
} */

void	sa(t_stack *stack)
{
	t_node		*first;
	t_node		*second;
	t_node		*third;

	if (stack->stack_a == NULL || stack->stack_a->next == NULL)
		return ;
	first = stack->stack_a;
	second = stack->stack_a->next;
	third = second->next;
	first->next = second->next;
	first->prev = second;
	if (third != NULL)
		third->prev = first;
	second->prev = NULL;
	second->next = first;
	stack->stack_a = second;
	if (stack->type == SORTER)
		write(1, "sa\n", 3);
}

void	sb(t_stack *stack)
{
	t_node		*first;
	t_node		*second;
	t_node		*third;

	if (stack->stack_b == NULL || stack->stack_b->next == NULL)
		return ;
	first = stack->stack_b;
	second = stack->stack_b->next;
	third = second->next;
	first->next = second->next;
	first->prev = second;
	if (third != NULL)
		third->prev = first;
	second->prev = NULL;
	second->next = first;
	stack->stack_b = second;
	if (stack->type == SORTER)
		write(1, "sb\n", 3);
}

void	ssa(t_stack *stack)
{
	t_node		*first;
	t_node		*second;
	t_node		*third;

	if (stack->stack_a == NULL || stack->stack_a->next == NULL)
		return ;
	first = stack->stack_a;
	second = stack->stack_a->next;
	third = second->next;
	first->next = second->next;
	first->prev = second;
	if (third != NULL)
		third->prev = first;
	second->prev = NULL;
	second->next = first;
	stack->stack_a = second;
}

void	ssb(t_stack *stack)
{
	t_node		*first;
	t_node		*second;
	t_node		*third;

	if (stack->stack_b == NULL || stack->stack_b->next == NULL)
		return ;
	first = stack->stack_b;
	second = stack->stack_b->next;
	third = second->next;
	first->next = second->next;
	first->prev = second;
	if (third != NULL)
		third->prev = first;
	second->prev = NULL;
	second->next = first;
	stack->stack_b = second;
}

void	ss(t_stack *stack)
{
	ssa(stack);
	ssb(stack);
	if (stack->type == SORTER)
		write (1, "ss\n", 3);
}

// link list..
// as long as u are pointin to same address it will not break
// no matter which pointer address u start to reassign..

// O-O-O-NULL 1->2->3->NULL

//   O-        1-3=\ l\ l l l l  l   2'\'
//   O-O-NULL  2-3=/ l \l l_l l_ l_    3->NULL
//                                   1/
//   O-         2
// O-  O-NULL 1/ \3

// O-O-O-NULL