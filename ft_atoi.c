/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:27:22 by mabdelou          #+#    #+#             */
/*   Updated: 2022/02/07 17:27:28 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

long	ft_atoi(const char *str)
{
	int		a;
	int		b;
	long	nb;
	int		longlon;

	longlon = 0;
	a = 0;
	b = 1;
	nb = 0;
	while ((str[a] >= 9 && str[a] <= 13) || str[a] == 32)
		a++;
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			b = b * -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		nb = nb * 10 + (str[a++] - 48);
		longlon++;
	}
	return (nb * b);
}
