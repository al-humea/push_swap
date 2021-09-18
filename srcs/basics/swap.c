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

void	sa(t_stack **stacks)
{
	t_stack *head;

	head = NULL;
	if (stacks[0] && stacks[0]->next)
	{
		head = stacks[0]->next;
		stacks[0]->next = stacks[0]->next->next;
		head->next = stacks[0];
		stacks[0] = head;
	}
	ft_putstr_fd("sa\n", 1);
	return ;
}

void	sb(t_stack **stacks)
{
	t_stack *head;

	head = NULL;
	if (stacks[1] && stacks[1]->next)
	{
		head = stacks[1]->next;
		stacks[1]->next = stacks[1]->next->next;
		head->next = stacks[1];
		stacks[1] = head;
	}
	ft_putstr_fd("sb\n", 1);
	return ;
}

void	ss(t_stack **stacks)
{
	t_stack *head;

	head = NULL;
	if (stacks[0] && stacks[0]->next)
	{
		head = stacks[0]->next;
		stacks[0]->next = stacks[0]->next->next;
		head->next = stacks[0];
		stacks[0] = head;
	}
	if (stacks[1] && stacks[1]->next)
	{
		head = stacks[1]->next;
		stacks[1]->next = stacks[1]->next->next;
		head->next = stacks[1];
		stacks[1] = head;
	}
	ft_putstr_fd("ss\n", 1);
	return ;
}
