/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: al-humea <al-humea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 13:51:15 by al-humea          #+#    #+#             */
/*   Updated: 2021/09/23 20:32:37 by al-humea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		sorted_b(t_stack **stacks, t_stack *head)
{
	t_stack	*med;

	med = head;
	while (head->next)
	{
		if (head->nbr < head->next->nbr)
			return(2);
		head = head->next;
	}
	head = stacks[1];
	while (head->next)
	{
		if (head->nbr < head->next->nbr)
			return(2);
		if (head->nbr == med->nbr)
			return (3);
		head = head->next;
	}
	return (3);
}

int		state_b(t_stack **stacks, int med)
{
	t_stack	*save;

	if (!(stacks[1]->next))
		return (3);
	save = stacks[1];
	if (stacks[1]->nbr < stacks[1]->next->nbr)
		return (0);
	if (stacks[1]->nbr == med)
		return(sorted_b(stacks, save));
	while (save->next)
		save = save->next;
	while (save)
	{
		if (save->nbr == med)
			return (sorted_b(stacks, save));/*Checks if list is sorted starting at median*/
		if (save->nbr < stacks[1]->nbr)
			return (1);
		save = save->prev;
	}
	return (-1);
}

int		sorted_a(t_stack **stacks, t_stack *head)
{
	t_stack	*med;

	med = head;
	while (head->next)
	{
		if (head->nbr > head->next->nbr)
			return(2);
		head = head->next;
	}
	head = stacks[0];
	while (head->next)
	{
		if (head->nbr > head->next->nbr)
			return(2);
		if (head->nbr == med->nbr)
			return (3);
		head = head->next;
	}
	return (3);
}

int		state_a(t_stack **stacks, int mina)
{
	t_stack	*save;

	if (!(stacks[0]->next))
		return (3);
	save = stacks[0];
	if (stacks[0]->nbr > stacks[0]->next->nbr)
		return (0);
	if (stacks[0]->nbr == mina)
		return(sorted_a(stacks, save));
	while (save->next)
		save = save->next;
	while (save)
	{
		if (save->nbr == mina)
			return (sorted_a(stacks, save));
		if (stacks[0]->nbr > save->nbr)
			return (1);
		save = save->prev;
	}
	return (-1);
}

/* Check a & b states and  rotates accordingly*/
void	insert(t_stack ** stacks, int med, int mina)
{
	static int	a = 0;
	static int	b = 0;

	a = state_a(stacks, mina);
	b = state_b(stacks, med);
	if (a == 3 && b == 3)
		return ;
	if (!a && !b)
		ss(stacks);
	if (!a && b != 0)
		sa(stacks);
	if (a != 0 && !b)
		sb(stacks);
	if (a == 1 && b == 1)
		rrr(stacks);
	if (a == 1 && b != 1)
		rra(stacks);
	if (a != 1 && b == 1)
		rrb(stacks);
	if (a == 2 && b == 2)
		rr(stacks);
	if (a == 2 && b != 2)
		ra(stacks);
	if (a !=2 && b == 2)
		rb(stacks);
	disp_stack(stacks);
	insert(stacks, med, mina);
}
