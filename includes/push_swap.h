/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: al-humea <al-humea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:01:38 by al-humea          #+#    #+#             */
/*   Updated: 2021/09/16 14:01:38 by al-humea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_stack
{
	int				nbr;
	struct s_stack	*next;
}	t_stack;

/*While testing*/
void		disp_stack(t_stack **stack);

/*Utils*/
long int	ft_atops(const char *str);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		display_error(void);
int			stackmin(t_stack *stack);

/*Basics*/
void		sa(t_stack **stacks);
void		sb(t_stack **stacks);
void		ss(t_stack **stacks);
void		ra(t_stack **stacks);
void		rb(t_stack **stacks);
void		rr(t_stack **stacks);
void		rra(t_stack **stacks);
void		rrb(t_stack **stacks);
void		rrr(t_stack **stacks);
void		pa(t_stack **stacks);
void		pb(t_stack **stacks);

/*Algo*/
void		bubble_sort(t_stack **stacks, int med);
void		sort(t_stack **stacks, int nbr);
#endif
