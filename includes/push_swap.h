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
/*Utils*/
long int	ft_atops(const char *str);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		display_error(void);

/*Basics*/
void		sa(t_stack **stacks);
void		sb(t_stack **stacks);
void		ss(t_stack **stacks);
void		ra(t_stack **stacks);
void		rb(t_stack **stacks);
void		rr(t_stack **stacks);
void		rra(t_stack **stacks);

#endif
