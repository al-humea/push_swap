/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: al-humea <al-humea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 10:56:06 by al-humea          #+#    #+#             */
/*   Updated: 2021/09/17 14:10:14 by al-humea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long int	ft_atops(const char *str)
{
	int			i;
	int			mlt;
	long int	nbr;

	if (!str[0])
		display_error();
	i = 0;
	mlt = 1;
	nbr = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			mlt *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		nbr = (nbr * 10) + (str[i] - 48);
		i++;
	}
	nbr *= mlt;
	if (str[i] != 0 || nbr > 2147483647 || nbr < -2147483648)
		display_error();
	return (nbr);
}
