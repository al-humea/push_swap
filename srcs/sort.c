/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: al-humea <al-humea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 19:16:01 by al-humea          #+#    #+#             */
/*   Updated: 2021/09/25 14:45:34 by al-humea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


void	divide(t_stack **stacks, int med, int nb)
{
	int	i;

	i = 0;
	while (i < (nb / 2))
	{
		if (stacks[0]->nbr <= med)
		{
			pb(stacks);
			i++;
			continue ;
		}
		ra(stacks);
	}
}


long int	median(t_stack **stacks, int nbr)
{
	int			i;
	long int	lw_nbr;
	long int	lst_nbr;
	t_stack		*save;

	i = 0;
	lw_nbr = stacks[0]->nbr;
	lst_nbr = -2147483648;
	save = stacks[0];
	while (i < (nbr / 2))
	{
		while (stacks[0])
		{
			if (stacks[0]->nbr < lw_nbr && stacks[0]->nbr > lst_nbr)
				lw_nbr = stacks[0]->nbr;
			stacks[0] = stacks[0]->next;
		}
		lst_nbr = lw_nbr;
		lw_nbr = 2147483649;
		stacks[0] = save;
		i++;
	}
	return (lst_nbr);
}

/*
** Searches for the median,
** Puts everything beneath median on B stack
** Bubble sorts in ascending order A stack
** Bubble sorts in descendiing order B stack
** Join stacks
*/
void	sort(t_stack **stacks, int nbr)
{
	long int	med;

	if (nbr > 3)
	{
		med = median(stacks, nbr);
		divide(stacks, med, nbr);
		disp_stack(stacks);
		insert(stacks, med, stackmin(stacks[0]));
/*
		Sorts both stacks
		conquer(stacks);
*/
	}
	if (nbr == 2 && stacks[0]->nbr > stacks[0]->next->nbr)
		sa(stacks);
	if (nbr == 3)
	{
		if (stacks[0]->nbr > stacks[0]->next->nbr)
			sa(stacks);
		if (stacks[0]->nbr > stacks[0]->next->next->nbr)
			rra(stacks);
		else if (stacks[0]->next->nbr > stacks[0]->next->next->nbr)
		{
			rra(stacks);
			sa(stacks);
		}
	}
	return ;
}
