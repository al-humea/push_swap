/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: al-humea <al-humea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 19:38:29 by al-humea          #+#    #+#             */
/*   Updated: 2021/09/16 19:38:29 by al-humea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*save;

	save = NULL;
	if (*stack && (*stack)->next)
	{
		save = (*stack)->next;
		(*stack)->next = (*stack)->next->next;
		if ((*stack)->next)
			(*stack)->next->prev = *stack;
		(*stack)->prev = save;
		save->next = *stack;
		save->prev = NULL;
		*stack = save;
	}
}
void	sa(t_stack **stacks)
{
	swap(&(stacks[0]));
	ft_putstr_fd("sa\n", 1);
	return ;
}

void	sb(t_stack **stacks)
{
	swap(&(stacks[1]));
	ft_putstr_fd("sb\n", 1);
	return ;
}

void	ss(t_stack **stacks)
{
	swap(&(stacks[0]));
	swap(&(stacks[1]));
	ft_putstr_fd("ss\n", 1);
	return ;
}
