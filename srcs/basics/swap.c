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

void	sa(t_stack *a)
{
	int	save;

	save = 0;
	if (a->next)
	{
		save = a->next->nbr;
		a->next->nbr = a->nbr;
		a->nbr = save;
		ft_putstr_fd("sa\n", 1);
	}
}

void	sb(t_stack *b)
{
	int	save;

	save = 0;
	if (b->next)
	{
		save = b->next->nbr;
		b->next->nbr = b->nbr;
		b->nbr = save;
		ft_putstr_fd("sb\n", 1);
	}
}

void	ss(t_stack *a, t_stack *b)
{
	int	save;

	save = 0;
	if (a->next)
	{
		save = a->next->nbr;
		a->next->nbr = a->nbr;
		a->nbr = save;
	}
	if (b->next)
	{
		save = b->next->nbr;
		b->next->nbr = b->nbr;
		b->nbr = save;
	}
	ft_putstr_fd("ss\n", 1);
}
