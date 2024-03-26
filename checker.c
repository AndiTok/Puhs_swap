/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:46:56 by atok              #+#    #+#             */
/*   Updated: 2023/03/18 19:13:00 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int c, char **v)
{
	t_stack	stack;
	int		i;

	stack.type = CHECKER;
	stack.stack_a = NULL;
	stack.stack_b = NULL;
	stack.counter_a = 0;
	stack.counter_b = 0;
	i = 1;
	if (c > 1)
	{
		while (v[i])
		{
			ft_check_param(v[i]);
			ft_check_max(ft_atoi(v[i]));
			ft_add_nodes_to_stack_a(&stack, ft_atoi(v[i]));
			ft_check_duplicate(&stack, ft_atoi(v[i]));
			i++;
		}
		ft_index(&stack);
		input(&stack);
	}
}
