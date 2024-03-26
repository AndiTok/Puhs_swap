/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:22:04 by atok              #+#    #+#             */
/*   Updated: 2023/03/14 18:29:10 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	pa(t_stack *stack)
// {
// 	t_node		*stack_b;
// 	t_node		*stack_a;
// 	t_node		*stack_b2;
// 	stack_b = stack->stack_b; 
// 	stack_a = stack->stack_a; 
// 	stack_b2 = stack->stack_b->next; 
// 	if(stack_b == NULL)
// 		return ;
// 	stack_b->prev = stack_a->prev; 
// 	stack_b->next = stack_a; 
// 	stack_a->prev = stack_b; 
// 	stack->stack_a = stack_b; 
// 	stack_b2->prev = NULL; 
// }
/*void	pa(t_stack *stack) // B1 to A1
{
	t_node		*stack_b;
	t_node		*stack_b2;
	t_node		*stack_a;

	stack_b = stack->stack_b; // B1
	stack_b2 = stack->stack_b->next; // B2
	stack_a = stack->stack_a; // A1
	if(stack_b == NULL)
		return ;
	stack_b->prev = stack_a->prev; // B1 -> A1 NULL
	stack_b->next = stack_a; // B1 -> A1
	stack_a->prev = stack_b; // A1 -> B1
	stack->stack_a = stack_b; // B1 == A1
	if(stack->counter_b > 1)
	{
		stack_b2 = stack->stack_b->next; // B2
		stack_b2->prev = NULL; // B2 -> NULL
	}
	stack->counter_a += 1;
	stack->counter_b -= 1;
}*/
// void	pb(t_stack *stack) // A1 to B1
// {
// 	t_node		*stack_a;
// 	t_node		*stack_b;
// 	t_node		*stack_a2;
// 	stack_a = stack->stack_a; // A1
// 	stack_b = stack->stack_b; // B1
// 	stack_a2 = stack->stack_a->next; // A2 
// 	if(stack_a == NULL)
// 		return ;
// 	stack_a->prev = stack_b->prev; // A1 NULL p-> B1 NULL
// 	stack_a->next = stack_b; // A1 n-> B1
// 	stack_b->prev = stack_a; // B1 p-> A1
// 	stack->stack_b = stack_a; // A1 == B1
// 	stack_a2->prev = NULL; // A2 -> NULL
// 		if(stack->counter_a < 2)
// 	{
// 		stack_a2 = stack->stack_b->next; // A2
// 		stack_a2->prev = NULL; // A2 -> NULL
// 	}
// 	stack->counter_a -= 1;
// 	stack->counter_b += 1;
// }
// void	pb(t_stack *stack) // A1 to B1 not working
// {
// 	t_node		*stack_a;
// 	t_node		*stack_b;
// 	t_node		*stack_a2;
// 	stack_a = stack->stack_a; // A1
// 	stack_b = stack->stack_b; // B1
// 	stack_a2 = stack->stack_a->next; // A2
// 	if(stack_a == NULL)
// 		return ;
// 	stack_b = stack_a;
// 	stack_a2 = stack_a;
// 		if(stack->counter_a < 2)
// 	{
// 		stack_a2 = stack->stack_b->next; // A2
// 		stack_a2->prev = NULL; // A2 -> NULL
// 	}
// 	// stack->counter_a -= 1;
// 	// stack->counter_b += 1;
// }

// void	pb(t_stack *stack)// Push A1 to B1 WORKING but use malloc and free
// {
// 	t_node		*stack_a;
// 	t_node		*stack_b;
// 	//t_node		*stack_a2;
// 	stack_a = stack->stack_a; 
// 	stack_b = stack->stack_b;
// 	stack_b = (t_node *) malloc (sizeof(t_node));
// 	//stack_a2 = stack->stack_a->next; 
// 	if(stack_a == NULL)
// 		return ;
// 	stack_b->index = stack_a->index;
// 	stack_b->data = stack_a->data;
// 	stack_b->prev = stack_a;
// 	if(stack_b == NULL)
// 		stack_b->next = NULL;
// 	else if (stack->counter_b > 2)
// 	stack->stack_a = stack_a->next;
// 	free(stack_a);
// 	// stack_a->prev = stack_b->prev; 
// 	// stack_a->next = stack_b; 
// 	// stack_b->prev = stack_a; 
// 	// stack->stack_b = stack_a; 
// 	// stack_a2->prev = NULL; 
// 	stack->counter_a -= 1;
// }
/* void	pb(t_stack *stack)// Push A1 to B1
{
	t_node		*a1;
	t_node		*a2;
	t_node		*b1;

	if(stack->stack_a == NULL)
		return ;
	a1 = stack->stack_a; // A1
	a2 = stack->stack_a->next; // A2
	b1 = stack->stack_b;  // B1
	a1->next = b1; // A1 -> B1
	a1->prev = NULL; // A1 -> NULL
	if(stack->stack_b != NULL) // if there is no node
		b1->prev = a1; // B1 -> A1
	stack->stack_b = a1; // A1 becomes B1
	if (a2 != NULL) // if there is a 2nd node 
	{
		a2->prev = NULL; // A2 -> NULL
		stack->stack_a = a2; // A2 becomes A1
	}
	if (a2 == NULL) // if there is no 2nd node 
		stack->stack_a = NULL; // declare stack_a as empty

	stack->counter_a -= 1;
	stack->counter_b += 1;
	write(1, "pb\n", 3);	
} */

void	pb(t_stack *stack)
{
	t_node		*a1;
	t_node		*a2;
	t_node		*b1;

	if (stack->stack_a == NULL)
		return ;
	a1 = stack->stack_a;
	a2 = stack->stack_a->next;
	b1 = stack->stack_b;
	a1->next = b1;
	a1->prev = NULL;
	if (stack->stack_b != NULL)
		b1->prev = a1;
	stack->stack_b = a1;
	if (a2 != NULL)
	{
		a2->prev = NULL;
		stack->stack_a = a2;
	}
	if (a2 == NULL)
		stack->stack_a = NULL;
	stack->counter_a -= 1;
	stack->counter_b += 1;
	if (stack->type == SORTER)
		write(1, "pb\n", 3);
}

void	pa(t_stack *stack)
{
	t_node		*b1;
	t_node		*b2;
	t_node		*a1;

	if (stack->stack_b == NULL)
		return ;
	b1 = stack->stack_b;
	b2 = stack->stack_b->next;
	a1 = stack->stack_a;
	b1->next = a1;
	b1->prev = NULL;
	if (stack->stack_a != NULL)
		a1->prev = b1;
	stack->stack_a = b1;
	if (b2 != NULL)
	{
		b2->prev = NULL;
		stack->stack_b = b2;
	}
	if (b2 == NULL)
		stack->stack_b = NULL;
	stack->counter_a += 1;
	stack->counter_b -= 1;
	if (stack->type == SORTER)
		write(1, "pa\n", 3);
}

// the first_node->next in an empty stack
// is not explicitly set to NULL. BUT
// because the stack is initialised as NULL; 
// it will always be pointing to NULL by default