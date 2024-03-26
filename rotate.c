/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 20:03:47 by atok              #+#    #+#             */
/*   Updated: 2023/03/15 21:31:34 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stack)
{
	t_node	*first;
	t_node	*second;
	t_node	*last;

	if (stack->stack_a == NULL || stack->stack_a->next == NULL)
		return ;
	first = stack->stack_a;
	second = stack->stack_a->next;
	last = stack->stack_a;
	while (last->next != NULL)
		last = last->next;
	first->next = NULL;
	first->prev = last;
	second->prev = NULL;
	last->next = first;
	stack->stack_a = second;
	if (stack->type == SORTER)
		write(1, "ra\n", 3);
}

void	rb(t_stack *stack)
{
	t_node	*first;
	t_node	*second;
	t_node	*last;

	if (stack->stack_b == NULL || stack->stack_b->next == NULL)
		return ;
	first = stack->stack_b;
	second = stack->stack_b->next;
	last = stack->stack_b;
	while (last->next != NULL)
		last = last->next;
	first->next = NULL;
	first->prev = last;
	second->prev = NULL;
	last->next = first;
	stack->stack_b = second;
	if (stack->type == SORTER)
		write(1, "rb\n", 3);
}

void	tra(t_stack *stack)
{
	t_node	*first;
	t_node	*second;
	t_node	*last;

	if (stack->stack_a == NULL || stack->stack_a->next == NULL)
		return ;
	first = stack->stack_a;
	second = stack->stack_a->next;
	last = stack->stack_a;
	while (last->next != NULL)
		last = last->next;
	first->next = NULL;
	first->prev = last;
	second->prev = NULL;
	last->next = first;
	stack->stack_a = second;
	if (stack->type == SORTER)
		write(1, "ra\n", 3);
}

void	trb(t_stack *stack)
{
	t_node	*first;
	t_node	*second;
	t_node	*last;

	if (stack->stack_b == NULL || stack->stack_b->next == NULL)
		return ;
	first = stack->stack_b;
	second = stack->stack_b->next;
	last = stack->stack_b;
	while (last->next != NULL)
		last = last->next;
	first->next = NULL;
	first->prev = last;
	second->prev = NULL;
	last->next = first;
	stack->stack_b = second;
	if (stack->type == SORTER)
		write(1, "rb\n", 3);
}

void	rr(t_stack *stack)
{
	tra(stack);
	trb(stack);
	if (stack->type == SORTER)
		write(1, "rr\n", 3);
}

/* void	ra(t_stack *stack) // A1 to AL
{
	t_node	*first;
	t_node	*second;
	t_node	*last;

	if (stack->stack_a == NULL || stack->stack_a->next == NULL)
		return ;
	first = stack->stack_a; // A1
	second = stack->stack_a->next; // A2
	last = stack->stack_a; // A1
	while (last->next != NULL) // loop till last 
		last = last->next; // becomes AL
	first->next = NULL; // A1 -> NULL
	first->prev = last; // A1 -> AL
	second->prev = NULL; // A2 -> NULL
	last->next = first; // AL -> A1
	stack->stack_a = second; // A2 becomes A1;
	write(1, "ra\n", 3);
}

void	rb(t_stack *stack) // B1 to BL
{
	t_node	*first;
	t_node	*second;
	t_node	*last;

	if (stack->stack_b == NULL || stack->stack_b->next == NULL)
		return ;
	first = stack->stack_b; // B1
	second = stack->stack_b->next; // B2
	last = stack->stack_b; // B1
	while (last->next != NULL) // loop till last 
		last = last->next; // becomes BL
	first->next = NULL; // B1 -> NULL
	first->prev = last; // B1 -> BL
	second->prev = NULL; // B2 -> NULL
	last->next = first; // BL -> B1
	stack->stack_b = second; // B2 becomes B1;
	write(1, "rb\n", 3);
} */