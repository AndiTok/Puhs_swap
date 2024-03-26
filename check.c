/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 21:03:32 by atok              #+#    #+#             */
/*   Updated: 2023/03/18 20:30:24 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	// if (!ft_strcmp(str, ft_strdup("")))
#include "push_swap.h"

int	check_empty(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

void	ft_check_param(char *str)
{
	if (check_empty(str))
	{
		write (1, "ERROR\nBlanks", 13);
		exit(1);
	}
	while (*str)
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
		{
			write (1, "Error\nContain alphabet\n", 24);
			exit(1);
		}
		str++;
	}
}

void	ft_check_max(long int num)
{
	if (num < INT_MIN || num > INT_MAX)
	{
		write (1, "Error\nBeyond 'int' limit\n", 26);
		exit(1);
	}
}

void	ft_check_duplicate(t_stack *stack, long int num)
{	
	t_node	*tmp_node;

	tmp_node = stack->stack_a;
	while (tmp_node->next != NULL)
	{
		if (tmp_node->data == num)
		{
			write(1, "Error\nDuplicate\n", 17);
			exit(1);
		}
		tmp_node = tmp_node->next;
	}
}

	//printf ("%ld\n", num);
//-2147483648 ~ 2147483647