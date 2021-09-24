/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: al-humea <al-humea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 16:08:41 by al-humea          #+#    #+#             */
/*   Updated: 2021/09/17 16:08:41 by al-humea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ra(t_stack **stacks)
{
	t_stack	*head;
	t_stack	*save;

	head = NULL;
	save = NULL;
	if (stacks[0] && stacks[0]->next)
	{
		save = stacks[0]->next;
		head = stacks[0];
		while (head->next)
			head = head->next;
		stacks[0]->next = NULL;
		head->next = stacks[0];
		stacks[0]->prev = head;
		stacks[0] = save;
		stacks[0]->prev = NULL;
	}
	ft_putstr_fd("ra\n", 1);
	return ;
}

void	rb(t_stack **stacks)
{
	t_stack	*head;
	t_stack	*save;

	head = NULL;
	save = NULL;
	if (stacks[1] && stacks[1]->next)
	{
		save = stacks[1]->next;
		head = stacks[1];
		while (head->next)
			head = head->next;
		stacks[1]->next = NULL;
		head->next = stacks[1];
		stacks[1]->prev = head;
		stacks[1] = save;
		stacks[1]->prev = NULL;
	}
	ft_putstr_fd("rb\n", 1);
	return ;
}

void	rr(t_stack **stacks)
{
	t_stack	*head;
	t_stack	*save;

	if (stacks[0] && stacks[0]->next)
	{
		save = stacks[0]->next;
		head = stacks[0];
		while (head->next)
			head = head->next;
		stacks[0]->next = NULL;
		head->next = stacks[0];
		stacks[0]->prev = head;
		stacks[0] = save;
		stacks[0]->prev = NULL;
	}
	if (stacks[1] && stacks[1]->next)
	{
		save = stacks[1]->next;
		head = stacks[1];
		while (head->next)
			head = head->next;
		stacks[1]->next = NULL;
		head->next = stacks[1];
		stacks[1]->prev = head;
		stacks[1] = save;
		stacks[1]->prev = NULL;
	}
	ft_putstr_fd("rr\n", 1);
}
